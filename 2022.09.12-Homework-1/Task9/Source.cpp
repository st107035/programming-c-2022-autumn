#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;

	std::cin >> x;
	int sqrx = x * x;
	std::cout << (sqrx + 1) * (sqrx + x) + 1;

	return EXIT_SUCCESS;
}