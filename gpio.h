#pragma once
#include<string>
#include<fstream>

namespace z_lib
{



	class Gpio
	{
	public:
		enum class Num
		{};

		Gpio();
		~Gpio();

		void export_pin();
		void unexport_pin();
		void direction();
		void set();
		void clear();

	private:

	};
}