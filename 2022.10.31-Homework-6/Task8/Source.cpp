#include<iostream>

int main(int argc, char* argv[])
{
	int a[100000]{ 0 };
	int n = 0;
	int k = 0;

	std::cin >> n;

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> k;
 
	{
		if (k > 0)
		{
			k = k % n;

			for (int i = n - k; i <= n - 1; ++i)
			{
				std::cout << a[i] << " ";
			}

			for (int i = 0; i <= n - k - 1; ++i)
			{
				std::cout << a[i] << " ";
			}
		}
		if (k < 0)
		{
			k = n-((-k) % n);

			for (int i = n - k; i <= n - 1; ++i)
			{
				std::cout << a[i] << " ";
			}

			for (int i = 0; i <= n - k - 1; ++i)
			{
				std::cout << a[i] << " ";
			}
		}
	}

	return EXIT_SUCCESS;
}