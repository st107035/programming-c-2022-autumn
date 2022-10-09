#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int line = 1;
	int col = 1;
	int i = 1;
	int flag = 0;

	std::cin >> n;

	do
	{
		do
		{
			std::cout << i << " ";
			if ((i < n) && (flag == 0))
			{
				i++;
			}
			else
			{
				if ((i < n) && (flag == 1))
				{
					i--;
				}
				if (i == n)
				{
					flag = 1;
					i--;
				}
			}
			col++;
		} while (col <= n);
		std::cout << std::endl;
		flag = 0;
		i = line + 1;
		col = 1;
		line++;
	} while (line <= n);

	return EXIT_SUCCESS;
}