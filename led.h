#pragma once
#include<string>


namespace z_lib
{
    enum class LedNum
    {
        ZERO, ONE, TWO, THREE
    };

    class Led
    {
    public:
        Led(LedNum num);
        ~Led();
        void set();
        void clear();

    private:
        LedNum led_num;
        std::string led_paths[4] = { "/sys/class/leds/beaglebone:green:usr0/",
                                    "/sys/class/leds/beaglebone:green:usr1/",
                                    "/sys/class/leds/beaglebone:green:usr2/",
                                    "/sys/class/leds/beaglebone:green:usr3/" };
    };
}
