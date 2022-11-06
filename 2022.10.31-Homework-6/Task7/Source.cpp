#include<iostream>

int main(int argc, char* argv[])
{
	int a[100]{ 0 };
	int n = 0;
	int product = 1;
	int sum = 0;
	int min = 101;
	int max = -101;
	int mini = 0;
	int maxi = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
		if (a[i] > 0)
		{
			sum += a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
			mini = i;
		}
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}
	}

	if (mini < maxi)
	{
		for (int i = mini + 1; i <= maxi - 1; ++i)
		{
			product *= a[i];
		}
	}
	else
	{
		for (int i = maxi + 1; i <= mini - 1; ++i)
		{
			product *= a[i];
		}
	}

	std::cout << sum << " " << product;

	return EXIT_SUCCESS;
}