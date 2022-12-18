#include <iostream>

int f(int a, int b, int c, int cache[21][21][21])
{
	if ((a <= 0) || (b <= 0) || (c <= 0))
	{
		return 1;
	}
	else
	{
		if ((a > 20) || (b > 20) || (c > 20))
		{
			return f(20, 20, 20, cache);
		}
		else
		{
			if ((a < b) && (b < c))
			{
				if (cache[a][b][c] == 0)
				{
					cache[a][b][c] = f(a, b, c - 1, cache) + f(a, b - 1, c - 1, cache) - f(a, b - 1, c, cache);
				}
				else
				{
					return cache[a][b][c];
				}
			}
			else
			{
				if (cache[a][b][c] == 0)
				{
					cache[a][b][c] = f(a - 1, b, c, cache) + f(a - 1, b - 1, c, cache) + f(a - 1, b, c - 1, cache) - f(a - 1, b - 1, c - 1, cache);
				}
				else
				{
					return cache[a][b][c];
				}
			}
		}
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	//int*** cache = new int** [a];
	//for (int i = 0; i < 20; ++i)
	//{
	//	cache[i] = new int* [20];
	//	for (int j = 0; j < 20; ++j)
	//	{
	//		cache[i][j] = new int[20];
	//	}
	//}

	//for (int i = 0; i < 20; ++i)
	//{
	//	for (int j = 0; j < 20; ++j)
	//	{
	//		for (int k = 0; k < 20; ++k)
	//		{
	//			cache[i][j][k] = 0;
	//		}
	//	}
	//}

	int cache[21][21][21]{ 0 };

	std::cout << f(a, b, c, cache);
}