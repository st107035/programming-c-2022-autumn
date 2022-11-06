#include<iostream>

int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	for (int j = n - 1; j >= 0; --j)
	{
		std::cout << a[j] << " ";
	}

	return EXIT_SUCCESS;
}