#include <iostream>

void Spiral(int** a, int n, int i, int j, int diffi, int diffj, int k)
{
	if (k <= n * n)
	{
		if ((i + diffi >= 0) && (j + diffj >= 0) && (i + diffi < n) && (j + diffj < n) && (a[i + diffi][j + diffj] == 0))
		{
			a[i][j] = k;
			Spiral(a, n, i + diffi, j + diffj, diffi, diffj, k + 1);
		}
		else
		{
			a[i][j] = k;
			if ((diffi == 0) && (diffj == 1))
			{
				Spiral(a, n, i + 1, j + 0, 1, 0, k + 1);
			}
			if ((diffi == 1) && (diffj == 0))
			{
				Spiral(a, n, i + 0, j - 1, 0, -1, k + 1);
			}
			if ((diffi == -1) && (diffj == 0))
			{
				Spiral(a, n, i + 0, j + 1, 0, 1, k + 1);
			}
			if ((diffi == 0) && (diffj == -1))
			{
				Spiral(a, n, i - 1, j + 0, -1, 0, k + 1);
			}
		}
	}
	else
	{
		return;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n]{0};
	}
	
	Spiral(a, n, 0, 0, 0, 1, 1);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << a[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	return EXIT_SUCCESS;
}