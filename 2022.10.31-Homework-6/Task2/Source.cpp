#include<iostream>

int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;
	int m = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> m;

	int b[200]{ 0 };

	for (int k = 0; k <= (m * 2) - 1; k = k + 2)
	{
		std::cin >> b[k] >> b[k + 1];
	}

	for (int k = 0; k <= (m * 2) - 1; k = k + 2)
	{
		for (int i = b[k] - 1; i <= b[k + 1] - 1; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}