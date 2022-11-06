#include<iostream>

int main(int argc, char* argv[])
{
	int a[100]{ 0 };
	int n = 0;
	int x = 0;
	int number = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i <= n - 1; ++i)
	{
		if ((a[i] < x) && (number == 0))
		{
			number = i + 1;
			break;
		}
	}

	if (number != 0)
	{
		std::cout << number;
	}
	else
	{
		std::cout << n + 1;
	}

	return EXIT_SUCCESS;
}