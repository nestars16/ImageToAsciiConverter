#ifndef IMAGE_H
#define IMAGE_H

    #include <filesystem>
    #include <iostream>
    #include <memory>
    #include <string_view>
    #include "ASCIIConverterConstants.h"
    #include <vector> 

    namespace AsciiConverter
    {
        class Image
        {
        public:
        struct Pixel
        {
            std::uint8_t red{};
            std::uint8_t green{};
            std::uint8_t blue{};

        };

        friend std::ostream& operator<<(std::ostream& out, const Pixel& p)
        {
            out << '(' << static_cast<int>(p.red) << ',' <<  static_cast<int>(p.green) << ',' <<  static_cast<int>(p.blue)<< ')';
            return out;
        }

        private:
        unsigned char* m_data{nullptr};
        int m_width;
        int m_height;
        int m_channels;    

        public:

        Image(std::string_view filepath);
        [[nodiscard]] const int getHeight() const noexcept {return m_height;}
        [[nodiscard]] const int getWidth() const noexcept {return m_width;}
        operator bool() const noexcept {return m_data != nullptr;}
        [[nodiscard]] unsigned char* getData() const noexcept {return m_data;} 
        ~Image();
        const Pixel pixelAt(int x, int y) const;
        [[nodiscard]] std::vector<Pixel> getImageData(int xAdvancementLevel = 1, int yAdvancementLevel = 1) const;

        };
    }

#endif