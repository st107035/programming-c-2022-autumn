#include <iostream>

int phi(int n)
{
	if (n < 2)
	{
		return 1;
	}
	else
	{
		return phi(n - 1) + phi(n - 2);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	std::cout << phi(n);

	return EXIT_SUCCESS;
}