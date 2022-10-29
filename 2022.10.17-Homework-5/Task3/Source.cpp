#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int max = 0;
	int min = 1000;

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	for (int j = 0; j <= n - 1; j++)
	{
		if (a[j] == max)
		{
			a[j] = min;
		}
		std::cout << a[j] << " ";
	}

	return EXIT_SUCCESS;
}