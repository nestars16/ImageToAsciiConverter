#include <string_view>
#include <include/Magick++.h>
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

/*
    inline  constexpr std::string_view brightnessMap{".:-=+*#%@"};
    inline  constexpr float redMultiplier{0.2126f};
    inline  constexpr float greenMultiplier{0.7152f};
    inline constexpr float blueMultiplier{0.0722f}; 

*/

Magick::Image m_data{};
constexpr BrightnessLevel getColorBrightnessLevel(const Magick::Color& pixelColor);

public:
    constexpr ImageParser(std::string_view imageLocation);
    ~ImageParser();
};


