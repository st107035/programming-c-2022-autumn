#include<iostream>

int main(int argc, char* argv[])
{
	int queenx = 0;
	int queeny = 0;
	int figurex = 0;
	int figurey = 0;

	std::cin >> queenx >> queeny >> figurex >> figurey;

	if ((figurex == queenx) || (figurey == queeny)
		|| (figurex - queenx == figurey - queeny)
		|| (figurex - queenx == -(figurey - queeny)))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}