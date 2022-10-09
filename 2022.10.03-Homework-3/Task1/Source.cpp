#include<iostream>

int main(int argc, char argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	while (a <= b)
	{
		std::cout << a << " ";
		a++;
	}

	return EXIT_SUCCESS;
}