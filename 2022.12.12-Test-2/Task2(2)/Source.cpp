#include<iostream>

void towers(int disc, int from, int to)
{
	if (disc <= 0)
	{
		return;
	}
	else
	{
		int temp = 6 - from - to;
		if (((from == 1) && (to == 2)) || ((from == 2) && (to == 3)) || ((from == 3) && (to == 1)))
		{
			towers(disc - 1, from, temp);
			std::cout << disc << ' ' << from << ' ' << to << ' ' << std::endl;
			towers(disc - 1, temp, to);
		}
		else
		{
			towers(disc - 1, from, to);
			std::cout << disc << ' ' << from << ' ' << temp << ' ' << std::endl;
			towers(disc - 1, to, from);
			std::cout << disc << ' ' << temp << ' ' << to << ' ' << std::endl;
			towers(disc - 1, from, to);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	towers(n, 1, 3);

	return EXIT_SUCCESS;
}