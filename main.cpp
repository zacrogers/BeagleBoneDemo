#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<unistd.h>

#include"led.h"

using namespace z_lib;

int main()
{
    std::vector<Led> leds{Led(LedNum::ZERO), Led(LedNum::ONE), Led(LedNum::TWO), Led(LedNum::THREE)};

	std::cout << "Demo Project\n";

	std::string input = "0"; 

    std::fstream fs;
    volatile int del;

	while (input != "s")
	{
        for (int i = 0; i < 4; ++i)
        {
            leds.at(i).set();
            for (del = 0; del < 3000000; ++del);
            leds.at(i).clear(); 
        }
		std::cin >> input;
	}
	return 0;
}

