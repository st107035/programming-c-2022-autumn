#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int max = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> a[i];
	}

	for (int j = 0; j <= n - 1; j++)
	{
		if (j == 0)
		{
			if (a[j] + a[j + 1] + a[n - 1] > max)
			{
				max = a[j] + a[j + 1] + a[n - 1];
			}
			continue;
		}
		if (j == n - 1)
		{
			if (a[j] + a[j - 1] + a[0] > max)
			{
				max = a[j] + a[j - 1] + a[0];
			}
			continue;
		}
		if (a[j - 1] + a[j] + a[j + 1] > max)
		{
			max = a[j - 1] + a[j] + a[j + 1];
		}
	}

	std::cout << max;

	return EXIT_SUCCESS;
}