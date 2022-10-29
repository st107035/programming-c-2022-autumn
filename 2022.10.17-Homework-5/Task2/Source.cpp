#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int l = 0;
	int r = 0;
	int max = -1001;
	int index = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (int j = l - 1; j <= r - 1; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
			index = j + 1;
		}
	}

	std::cout << max << " " << index;

	return EXIT_SUCCESS;
}