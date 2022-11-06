#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c[100]{ 0 };
	int profit = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> c[i];
	}

	int lastj = 0;
	while (c[n - 1] != 0)
	{
		int maxc = 0;
		int maxj = 0;
		for (int j = 0;j <= n - 1; j++)
		{
			if (c[j] >= maxc)
			{
				maxc = c[j];
				maxj = j;
			}
		}
		for (int k = 0; k <= maxj; k++)
		{
			c[k] = 0;
		}
		profit += maxc * (maxj + 1 - lastj);
		lastj = maxj + 1;
	}

	std::cout << profit;

	return EXIT_SUCCESS;
}