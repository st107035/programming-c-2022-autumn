#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100]{ 0 };
	int b[100]{ 0 };
	int maxprofit = 0;
	int number = 1;

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> a[i];
	}
	for (int j = 0; j <= n - 1; j++)
	{
		std::cin >> b[j];
	}

	for (int k = 0; k <= n - 1; k++)
	{
		if (a[k] * b[k] > maxprofit)
		{
			maxprofit = a[k] * b[k];
			number = k + 1;
		}
	}

	std::cout << number;

	return EXIT_SUCCESS;
}