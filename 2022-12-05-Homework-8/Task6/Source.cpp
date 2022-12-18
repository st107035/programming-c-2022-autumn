#include <iostream>

int MaxDigit(int n, int max)
{
	if (n == 0)
	{
		return max;
	}
	else
	{
		if (n % 10 > max)
		{
			max = n % 10;
		}

		MaxDigit(n / 10, max);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	std::cout << MaxDigit(n, 0);

	return EXIT_SUCCESS;
}