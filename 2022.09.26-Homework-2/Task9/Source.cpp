#include<iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;

	std::cin >> m >> n;
	std::cin >> x >> y;

	if ((x + 1 >= 1) && (x + 1 <= m))
	{
		std::cout << x + 1 << " " << y << std::endl;
	}
	if ((y + 1 >= 1) && (y + 1 <= n))
	{
		std::cout << x << " " << y + 1 << std::endl;
	}
	if ((x - 1 >= 1) && (x - 1 <= m))
	{
		std::cout << x - 1 << " " << y << std::endl;
	}
	if ((y - 1 >= 1) && (y - 1 <= n))
	{
		std::cout << x << " " << y - 1 << std::endl;
	}
	return EXIT_SUCCESS;
}