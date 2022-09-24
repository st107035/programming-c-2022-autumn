#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;
	std::cout << n + 1 + ((n + 1) % 2);

	return EXIT_SUCCESS;
}