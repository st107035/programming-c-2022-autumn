#include<iostream>

void towers(int disk, int from, int to)
{
	if (disk <= 0)
	{
		return;
	}
	else
	{
		int temp = 0;
		temp = 6 - from - to;

		towers(disk - 1, from, temp);
		std::cout << "Disk " << disk << " move from " << from << " to " << to << std::endl;
		towers(disk - 1, temp, to);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	towers(n, 1, 2);

	return EXIT_SUCCESS;
}