#include <iostream>

int main(int argc, char* argv[])
{
	int number = 0;

	std::cin >> number;
	std::cout << "The next number for the number " << number << " is " << number + 1 << "." << std::endl;
	std::cout << "The previous number for the number " << number << " is " << number - 1 << "." << std::endl;

	return EXIT_SUCCESS;
}