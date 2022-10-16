#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int count = 0;

	std::cin >> x;

	for (int i = 1; i * i <= x; ++i)
	{
		if ((i* i == x) && (x % i == 0))
		{
			count += 1;
			break;
		}
		if (x % i == 0)
		{
			count += 2;
		}
	}
	
	std::cout << count;

	return EXIT_SUCCESS;
}