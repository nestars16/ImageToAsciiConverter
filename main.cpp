#include <iostream>
#include <include/Magick++.h>
//cmake -S ..\..\ -B . -G "MinGW Makefiles"

int main( int /*argc*/, char ** argv)
{

    Magick::InitializeMagick(*argv);

    #include <include/ImageParser.h>

    ImageParser firstTest{static_cast<std::string_view>("img/thumbsUpEmoji")};

    
    return 0;
}