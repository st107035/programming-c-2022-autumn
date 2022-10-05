#include<iostream>
//никак не получается сделать с нормальным русским текстом(

int main(int argc, char* argv[])
{
	int number = 0;

	std::cin >> number;

	if (number == 0)
	{
		std::cout << "nol' bananov.";
	}
	else
	{
		switch (number / 100)
		{
		case 1:
			std::cout << "sto ";
			break;
		case 2:
			std::cout << "dvesti ";
			break;
		case 3:
			std::cout << "trista ";
			break;
		case 4:
			std::cout << "chetiresta ";
			break;
		case 5:
			std::cout << "pyat'sot ";
			break;
		case 6:
			std::cout << "schest'sot ";
			break;
		case 7:
			std::cout << "sem'sot ";
			break;
		case 8:
			std::cout << "vosem'sot ";
			break;
		case 9:
			std::cout << "devyat'sot ";
			break;
		}
		if ((number % 100) / 10 != 1)
		{
			switch ((number % 100) / 10)
			{
			case 2:
				std::cout << "dvadtsat' ";
				break;
			case 3:
				std::cout << "tridtsat' ";
				break;
			case 4:
				std::cout << "sorok ";
				break;
			case 5:
				std::cout << "pyat'desyat ";
				break;
			case 6:
				std::cout << "schest'desyat ";
				break;
			case 7:
				std::cout << "sem'desyat ";
				break;
			case 8:
				std::cout << "vosem'desyat ";
				break;
			case 9:
				std::cout << "devyanosto ";
				break;
			}
			switch (number % 10)
			{
			case 1:
				std::cout << "odin banan.";
				break;
			case 2:
				std::cout << "dva banana.";
				break;
			case 3:
				std::cout << "tri banana.";
				break;
			case 4:
				std::cout << "chetire banana.";
				break;
			case 5:
				std::cout << "pyat' bananov.";
				break;
			case 6:
				std::cout << "schest' bananov.";
				break;
			case 7:
				std::cout << "sem' bananov.";
				break;
			case 8:
				std::cout << "vosem' bananov.";
				break;
			case 9:
				std::cout << "devyat' bananov.";
				break;
			case 0:
				std::cout << "bananov.";
				break;
			}
		}
		else
		{
			switch (number % 10)
			{
			case 0:
				std::cout << "desyat' bananov.";
				break;
			case 1:
				std::cout << "odinnadtsat' bananov.";
				break;
			case 2:
				std::cout << "dvenadtsat' bananov.";
				break;
			case 3:
				std::cout << "trinadtsat' bananov.";
				break;
			case 4:
				std::cout << "chetirnadtsat' bananov.";
				break;
			case 5:
				std::cout << "pyatnadtsat' bananov.";
				break;
			case 6:
				std::cout << "schestnadtsat' bananov.";
				break;
			case 7:
				std::cout << "semnadtsat' bananov.";
				break;
			case 8:
				std::cout << "vosemnadtsat' bananov.";
				break;
			case 9:
				std::cout << "devyatnadtsat' bananov.";
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}