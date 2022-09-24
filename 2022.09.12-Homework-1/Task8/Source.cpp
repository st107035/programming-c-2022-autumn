#include <iostream>

int main(int argc, char* argv[])
{
	int hours1 = 0;
	int minutes1 = 0;
	int seconds1 = 0;
	int hours2 = 0;
	int minutes2 = 0;
	int seconds2 = 0;

	std::cin >> hours1 >> minutes1 >> seconds1;
	std::cin >> hours2 >> minutes2 >> seconds2;

	std::cout << (hours2 * 3600 + minutes2 * 60 + seconds2) - (hours1 * 3600 + minutes1 * 60 + seconds1);

	return EXIT_SUCCESS;
}