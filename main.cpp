#include <iostream>
#include <ImageParser.h>
//cmake -S ..\..\ -B . -G "MinGW Makefiles"

int main( int /*argc*/, char ** argv)
{

    Magick::InitializeMagick(*argv);

    ImageParser firstTest{static_cast<std::string_view>("img/thumbsUpEmoji")};

    
    return 0;
}