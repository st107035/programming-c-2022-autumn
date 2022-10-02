#include<iostream>

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
		{
			std::cout << "right";
		}
		if ((a * a + b * b > c * c) && (a * a + c * c > b * b) && (c * c + b * b > a * a))
		{
			std::cout << "acute";
		}
		if ((a * a + b * b < c * c) || (a * a + c * c < b * b) || (c * c + b * b < a * a))
		{
			std::cout << "obtuse";
		}
	}
	else
	{
		std::cout << "impossible";
	}

	return EXIT_SUCCESS;
}