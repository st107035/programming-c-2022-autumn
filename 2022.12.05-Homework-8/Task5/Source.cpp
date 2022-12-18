#include <iostream>

int f(int n)
{
	if (n < 1)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (n > 1)
	{
		return f(n - 3) + f(n - 5);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (f(n) == 0)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}
}