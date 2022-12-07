#include "include/ImageParser.h"

ImageParser::ImageParser(std::string_view imageLocation)
{

    
    m_data.read(static_cast<std::string>(imageLocation));  

    for(int row{0}; row < m_data.rows(); ++row)
        for(int column{0}; column < m_data.columns(); ++column)
            getColorBrightnessLevel(m_data.pixelColor(column,row));
        
    //m_data.type(Magick::GrayscaleType);

    /*Magick::Pixels rawData{m_data};
    
    auto* readableData{rawData.getConst(0,0,rawData.columns(), rawData.rows())};

    for(int row{0}; row < rawData.rows();++row)
        for(int column{0}; column < rawData.columns();++column)
            std::cout << *readableData++= ;
    */

}

ImageParser::~ImageParser()
{
}

ImageParser::BrightnessLevel ImageParser::getColorBrightnessLevel(const Magick::Color& pixelColor)
{


    //int luminanceValue{pixelColor.quantumRed() * ImageParser::redMultiplier + 
    //                    pixelColor.quantumGreen() * ImageParser:: greenMultiplier +
    //                    pixelColor.quantumBlue() * ImageParser::blueMultiplier};

   // std::cout << luminanceValue << '\n';

    return BrightnessLevel::neutral;
}