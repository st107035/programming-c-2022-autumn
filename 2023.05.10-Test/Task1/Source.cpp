#include"Complex.h"
#include<iostream>

int main(int argc, char* argv[])
{
	double a = 0.5;
	Complex c = Complex(10, 20);

	std::cout << c << " " << c + a << " " << c - a << " " << c * a << " " << c / a << std::endl;
	std::cout << a + c << " " << a - c << " " << a * c << " " << a / c << std::endl;

	Complex c1 = Complex(5, 15);

	std::cout << c1 << " " << c + c1 << " " << c - c1 << " " << c * c1 << " " << c / c1 << std::endl;

	return EXIT_SUCCESS;
}