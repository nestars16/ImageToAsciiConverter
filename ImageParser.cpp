#include "include\ImageParser.h"

ImageParser::ImageParser(std::string_view imageLocation)
{

    
    m_data.read(static_cast<std::string>(imageLocation));  

    for(int row{0}; row < m_data.rows(); ++row)
        for(int column{0}; column < m_data.columns(); ++column)
            ; 
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