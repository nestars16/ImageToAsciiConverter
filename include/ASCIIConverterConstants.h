#ifndef ASCII_CONSTANTS_H
#define ASCII_CONSTANTS_H

#include <string_view>

namespace AsciiConverter
{
    namespace Constants
    {
        inline constexpr int channels{3};
        inline constexpr std::string_view brightnessLevels{" .:-=+*#%@"};
        inline constexpr float redMultiplier{0.299f};
        inline constexpr float greenMultiplier{0.587f};
        inline constexpr float blueMultiplier{0.114f};
    
    }
}

#endif
