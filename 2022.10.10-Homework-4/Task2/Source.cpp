#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int decx = 0;

	std::cin >> x;

	for (int i = 0; x != 0; ++i)
	{
		if (i == 0)
		{
			decx += 1 * (x % 10);
		}
		else
		{
			int deg2 = 1;

			for (int j = 1; j <= i; ++j)
			{
				deg2 *= 2 * (x % 10);
			}

			decx += deg2;
		}
		x = x / 10;
	}

	std::cout << decx;

	return EXIT_SUCCESS;
}