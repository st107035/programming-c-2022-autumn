#include <iostream>

int Removal(int** a, int k, int n)
{
	int cnt = 1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i][1] == k)
		{
			cnt = cnt + Removal(a, a[i][0], n);
		}
	}
	return cnt;
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[2];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	int k = 0;
	std::cin >> k;

	std::cout << Removal(a, k, n);

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	return EXIT_SUCCESS;
}