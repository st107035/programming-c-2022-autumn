#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int count = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int j = 0; j <= n - 1; j++)
	{
		if (a[j] == x)
		{
			count++;
		}
	}

	std::cout << count;

	return EXIT_SUCCESS;
}