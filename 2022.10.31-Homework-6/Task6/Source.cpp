#include<iostream>

int main(int argc, char* argv[])
{
	int a[100]{ 0 };
	int n = 0;
	int count3 = 0;
	int count4 = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
		if (a[i] % 2 != 0)
		{
			++count3;
			std::cout << a[i] << " ";
		}
	}

	std::cout << std::endl;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
		if (a[i] % 2 == 0)
		{
			++count4;
			std::cout << a[i] << " ";
		}
	}

	std::cout << std::endl;

	if (count4 >= count3)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}