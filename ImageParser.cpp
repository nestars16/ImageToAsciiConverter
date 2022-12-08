#include "ImageParser.h"

ImageParser::ImageParser(std::string_view imageLocation)
{

    
    m_data.read(static_cast<std::string>(imageLocation));  

    for(int row{0}; row < m_data.rows(); ++row)
        for(int column{0}; column < m_data.columns(); ++column)
            getColorBrightnessLevel(m_data.pixelColor(column,row));
        

}

ImageParser::~ImageParser()
{
}

constexpr ImageParser::BrightnessLevel ImageParser::getColorBrightnessLevel(const Magick::Color& pixelColor)
{


    //int luminanceValue{pixelColor.quantumRed() * ImageParser::redMultiplier + 
    //                    pixelColor.quantumGreen() * ImageParser:: greenMultiplier +
    //                    pixelColor.quantumBlue() * ImageParser::blueMultiplier};

   // std::cout << luminanceValue << '\n';

    return BrightnessLevel::neutral;
}