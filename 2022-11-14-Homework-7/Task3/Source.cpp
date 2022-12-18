#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}

	int** b = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		b[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j + i == n - 1)
			{
				b[i][j] = a[i][j];
			}
			else
			{
				b[i][j] =  a[n - j - 1][n - i - 1];
			}
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << b[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}

	delete[] a;

	for (int i = 0; i < n; ++i)
	{
		delete[] b[i];
	}

	delete[] b;

	return EXIT_SUCCESS;
}