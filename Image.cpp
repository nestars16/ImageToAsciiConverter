#include "include/Image.h"
#include "include/ImageParser.h"

#define STB_IMAGE_IMPLEMENTATION
#include "include/stb_image.h"

AsciiConverter::Image::Image(std::string_view filepath) : m_data{stbi_load(static_cast<std::string>(filepath).c_str(),&m_width, &m_height, &m_channels, AsciiConverter::Constants::channels)}
{
    //m_data.reset(stbi_load(static_cast<std::string>(filepath).c_str(),&m_width, &m_height, &m_channels, AsciiConverter::Constants::channels));
    assert(!filepath.empty() && "Filepath cannot be empty");

    if(stbi_failure_reason())
        std::cout << stbi_failure_reason() << '\n';
}

AsciiConverter::Image::~Image()
{
    if(m_data)
        stbi_image_free(m_data);
}

const AsciiConverter::Image::Pixel AsciiConverter::Image::pixelAt(int x, int y) const 
{
    std::uint8_t* selectedPixel = m_data + m_channels * (m_width * y + x);
    return Pixel{selectedPixel[0], selectedPixel[1], selectedPixel[2]};
}

std::vector<AsciiConverter::Image::Pixel> AsciiConverter::Image::getImageData(int xAdvancementLevel, int yAdvancementLevel) const 
{
    std::vector<Pixel> extractedPixels;
    extractedPixels.reserve(m_height * m_width);

    //std::cout << "Reserved " << m_height * m_width << " pixels of space\n";

    for(int row{1}; row <= m_height; row += yAdvancementLevel)
    {
        for(int column{1}; column <= m_width; column += xAdvancementLevel)
            {
                std::uint8_t* selectedPixel = m_data + m_channels * (m_width * row + column);
                //std::cout << Pixel{selectedPixel[0], selectedPixel[1], selectedPixel[2]} << '\n'; 
                extractedPixels.emplace_back(selectedPixel[0], selectedPixel[1], selectedPixel[2]);
                //std::cout << extractedPixels.back() << '\n';    
            }
            //std::cout << row << '\n';
    }

       

    return extractedPixels;
} 



AsciiConverter::ImageParser::ImageParser(Image& img): m_image{img}
{
    m_brightnessValues.reserve(m_image.getHeight() * m_image.getWidth());
    
    for(const auto& pixel : m_image.getImageData(1,1))
    {
        m_brightnessValues.push_back(getBrightnessValue(pixel));
        //std::cout << getBrightnessValue(pixel) << '\n';
    }
}

AsciiConverter::ImageParser::BrightnessLevel AsciiConverter::ImageParser::getBrightnessLevel(const int brightnessValue) const noexcept
{
    using namespace AsciiConverter;

    if(brightnessValue < 25)
        return ImageParser::BrightnessLevel::darkest;
    
    if(brightnessValue < 50)
        return ImageParser::BrightnessLevel::darker;

    if(brightnessValue < 75)
        return ImageParser::BrightnessLevel::dark;
    
    if(brightnessValue < 100)
        return ImageParser::BrightnessLevel::dimmer;

    if(brightnessValue < 125)
        return ImageParser::BrightnessLevel::dim;

    if(brightnessValue < 150)
        return ImageParser::BrightnessLevel::neutral;
    
    if(brightnessValue < 175)
        return ImageParser::BrightnessLevel::light;

    if(brightnessValue < 200)
        return ImageParser::BrightnessLevel::bright;

    if(brightnessValue < 225)
        return ImageParser::BrightnessLevel::brighter;

    return ImageParser::BrightnessLevel::brightest;
}

void AsciiConverter::ImageParser::print() const noexcept
{
    int columnNumber{1};

    for(const auto brightnessVal: m_brightnessValues)
    {
        std::cout << AsciiConverter::Constants::brightnessLevels[static_cast<int>(getBrightnessLevel(brightnessVal))];
        ++columnNumber;

        if(columnNumber >= m_image.getWidth())
        {
            std::cout << '\n';
            columnNumber = 0;
        }
    }
}

int AsciiConverter::ImageParser::getBrightnessValue(const AsciiConverter::Image::Pixel& p) const noexcept
{
    using namespace AsciiConverter;

    return static_cast<int>(Constants::redMultiplier * p.red + Constants::greenMultiplier * p.green + Constants::blueMultiplier * p.blue);
}

void AsciiConverter::ImageParser::filePrint(std::string_view filepath) const
{
    std::ofstream outputFile{static_cast<std::string>(filepath),std::ios::out};
    int columnNumber{1};

    for(const auto brightnessVal: m_brightnessValues)
    {
        outputFile << AsciiConverter::Constants::brightnessLevels[static_cast<int>(getBrightnessLevel(brightnessVal))];
        ++columnNumber;

        if(columnNumber >= m_image.getWidth())
        {
            outputFile << '\n';
            columnNumber = 0;
        }
    }   

}