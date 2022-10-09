#include<iostream>

int main(int argc, char* argv[])
{
	int number = 1;
	int count = 0;

	while (number != 0)
	{
		std::cin >> number;
		if ((number < 0) and (number % 2 == 0))
		{
			count++;
		}
	}

	std::cout << count;

	return EXIT_SUCCESS;
}