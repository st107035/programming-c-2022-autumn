#include<iostream>

int combinations(int n, int k)
{
	if ((k == 0) || (k == n))
	{
		return 1;
	}
	else
	{
		return combinations(n - 1, k) + combinations(n - 1, k - 1);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n >> k;

	std::cout << combinations(n, k);

	return EXIT_SUCCESS;
}