#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int** a = new int* [n];
	int** b = new int* [n];

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}

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
			if (i != j)
			{
				b[i][j] = a[j][i];
			}
			else
		{
				b[i][j] = a[i][j];
			}
		}
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