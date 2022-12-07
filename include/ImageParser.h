#include <string_view>
#include <lib\include\Magick++.h>
#include <iostream> 

class ImageParser
{
private:
enum class BrightnessLevel
{
    darkest,
    darker,
    dark,
    dimmer,
    dim,
    neutral,
    light,
    bright,
    brighter,
    brightest
};

Magick::Image m_data{};
BrightnessLevel getColorBrightnessLevel(Magick::Color pixelColor);

public:
    constexpr ImageParser(std::string_view imageLocation);
    ~ImageParser();
};


