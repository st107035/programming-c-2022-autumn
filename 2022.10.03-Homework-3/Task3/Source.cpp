#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int line = 1;
	int col = 1;
	int i = 1;

	std::cin >> n;

	do
	{
		do
		{
			std::cout << i << " ";
			i++;
			col++;
		} while (col <= n);
		std::cout << std::endl;
		i = line + 1;
		col = 1;
		line++;
	} while (line <= n);

	return EXIT_SUCCESS;
}