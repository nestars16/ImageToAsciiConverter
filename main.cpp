#include <iostream>
#include <lib\include\Magick++.h>
//cmake -S ..\..\ -B . -G "MinGW Makefiles"

int main( int /*argc*/, char ** argv)
{

    Magick::InitializeMagick(*argv);
    
    std::cout << "lol\n";
    return 0;
}