#include <iostream>
#include "include/Image.h"
#include "include/ImageParser.h"
//cmake -S ..\..\ -B . -G "MinGW Makefiles"

int main( int argc, char* argv[])
{

    if(argc != 3)
    {
        std::cerr << "ImageToAsciiConverter called with incorrect number of arguments\n";
        return 1;
    }

    std::string imageFileName{argv[1]};
    std::string textFileName{argv[2]};


    //std::cout << std::filesystem::absolute(imageFileName).string() << '\n';

    AsciiConverter::Image selectedImage{imageFileName};

    if(!selectedImage)
    {
        std::cerr << "There was an error opening the image, please try again\n";
        return 1;
    }

    AsciiConverter::ImageParser imgToAsciiParser{selectedImage};


    std::cout << "Parsing image...\n";
    if(selectedImage.getWidth() < 120)
        imgToAsciiParser.print();

    imgToAsciiParser.filePrint(textFileName);  

    return 0;
}