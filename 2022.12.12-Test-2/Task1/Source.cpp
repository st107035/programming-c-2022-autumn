#include<iostream>

int Fact(int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return k * Fact(k - 1);
	}
}

int P(int i, int j, int n, int k)
{
	int cnt = 0;

	if (k == 1)
	{
		cnt = 1;
	}
	else
	{
		for (int i1 = 0; i1 < n; ++i1)
		{
			for (int j1 = 0; j1 < n; ++j1)
			{
				if ((i != i1) && (j1 != j) && ((abs(i1 - i) > 2) || (abs(j1 - j) > 2)) && (abs(i1 - i) != abs(j1 - j)))
				{
					cnt += P(i1, j1, n, k - 1);
				}
			}
		}
	}
	return cnt;
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int cnt = 0;

	std::cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cnt += P(i, j, n, k);
		}
	}

	std::cout << (cnt / Fact(k));

	return EXIT_SUCCESS;
}
