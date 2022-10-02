#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;

	std::cin >> a >> b >> c >> d;
	if ((a == (- b)) && (a == 0))
	{
		std::cout << "INF";
	}
	if ((a != (-b)) && (a == 0))
	{
		std::cout << "NO";
	}
	if (a != 0)
	{
		if ((-b) % a != 0)
		{
			std::cout << "NO";
		}
		else
		{
			if (c * ((-b) / a) == (-d))
			{
				std::cout << "NO";
			}
			else
			{
				std::cout << (-b) / a;
			}
		}
	}

	return EXIT_SUCCESS;
}