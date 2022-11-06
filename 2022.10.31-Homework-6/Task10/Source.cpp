#include<iostream>
//Ќа сайте стоит ограничение по времени, поэтому он не засчитывает, но € не знаю, как это исправить

int main(int argc, char* argv[])
{
	int a[100000]{ 0 };
	int b[100000]{ 0 };
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	for (int i = 0; i <= n - 1; ++i)
	{
		int c = 0;
		std::cin >> c;
		a[c] = a[c] + 1;
	}

	for (int i = 0; i <= m - 1; ++i)
	{
		int c = 0;
		std::cin >> c;
		b[c] = b[c] + 1;
	}

	for (int i = 0; i < 100000; ++i)
	{
		if ((a[i] >= 1) && (b[i] >= 1))
		{
			std::cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}