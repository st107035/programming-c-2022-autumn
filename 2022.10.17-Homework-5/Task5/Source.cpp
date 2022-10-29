#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int x = 0;
	int mindiff = 2000;
	int mina = -1001;

	std::cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int j = 0; j <= n - 1; j++)
	{
		int diff = x - a[j];
		if (x - a[j] < 0)
		{
			diff = a[j] - x;
		}
		if (diff < mindiff)
		{
			mindiff = diff;
			mina = a[j];
		}
		if ((diff == mindiff) && (a[j] < mina))
		{
			mina = a[j];
		}
	}

	std::cout << mina;

	return EXIT_SUCCESS;
}