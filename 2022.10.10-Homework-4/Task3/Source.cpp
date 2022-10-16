#include<iostream>

int main(int argc, char* argv[])
{
	int seconds = 0;
	int number = 1;
	int count = 0;

	std::cin >> seconds;

	for (int i = 1; i <= seconds; ++i)
	{
		std::cout << number << " ";
		++count;
		if (count == number)
		{
			++number;
			count = 0;
		}
	}

	return EXIT_SUCCESS;
}