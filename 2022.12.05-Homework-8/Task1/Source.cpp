#include<iostream>

int min(int a1, int a2, int a3, int a4)
{
	if ((a1 <= a2) && (a1 <= a3) && (a1 <= a4))
	{
	return a1;
	}
	else
	{
		return min(a2, a3, a4, a1); 
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	std::cout << min(a, b, c, d);

	return EXIT_SUCCESS;
}