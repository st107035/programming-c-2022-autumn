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

	for (int i = 0; i <= n - 1; ++i)
	{
		if ((i + p) <= n - 1)
		{
			std::cout << a[i + p] << " ";
		}
		else
		{
			std::cout << a[(i + p) % n] << " ";
		}
	}

	return EXIT_SUCCESS;
}