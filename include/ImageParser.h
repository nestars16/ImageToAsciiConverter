#ifndef IMAGE_PARSER_H
#define IMAGE_PARSER_H

#include "Image.h"
#include <fstream>

    namespace AsciiConverter
    {
        class ImageParser
        {
            public:
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
                    brightest,
                };


            private:
                Image& m_image;
                [[nodiscard]] int getBrightnessValue(const Image::Pixel& pix)const noexcept;
                std::vector<int> m_brightnessValues;
                [[nodiscard]] BrightnessLevel getBrightnessLevel(const int brightnessValue) const noexcept;

            public:
                ImageParser(Image& img);
                void print() const noexcept;
                void filePrint(std::string_view filename) const;
        };
    }

#endif