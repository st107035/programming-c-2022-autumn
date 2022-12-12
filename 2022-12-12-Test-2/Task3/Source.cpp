#include<iostream>

void P(int n, int k)
{
	if (k <= n - 1)
	{
		if (n % k == 0)
		{
			std::cout << "composite";
		}
		else
		{
			P(n, k + 1);
		}
	}
	else
	{
		std::cout << "prime";
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;
	
	k = 2;

	P(n, k);

	return EXIT_SUCCESS;
}