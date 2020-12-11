#include"led.h"
#include<fstream>


namespace z_lib
{
    Led::Led(LedNum num)
    {
        led_num = num;
    }

    Led::~Led()
    {
    }

    void Led::set()
    {
        std::fstream fs;
        std::string msg = this->led_paths[static_cast<int>(led_num)] + "brightness";

        fs.open(msg, std::fstream::out);
        fs << "1";
        fs.close();
    }

    void Led::clear()
    {
        std::fstream fs;
        std::string msg = this->led_paths[static_cast<int>(led_num)] + "brightness";

        fs.open(msg, std::fstream::out);
        fs << "0";
        fs.close();
    }
}