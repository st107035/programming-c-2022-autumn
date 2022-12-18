#include<iostream>

int main(int argc, char* argv[])
{
	int a[100000]{ 0 };
	int n = 0;
	int p = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
		if (a[i] < a[p])
		{
			p = i;
		}
	}

	p = n - p;

	for (int i = 0; i < n / 2; ++i)
	{
		int c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}

	for (int i = 0; i < p / 2; ++i)
	{
		int c = a[i];
		a[i] = a[p - 1 - i];
		a[p - 1 - i] = c;
	}

	for (int i = p; i < (n + p + 1) / 2; ++i)
	{
		int c = a[i];
		a[i] = a[n - 1 + p - i];
		a[n - 1 + p - i] = c;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << ' ';
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}