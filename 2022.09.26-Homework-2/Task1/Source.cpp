#include<iostream>
//никак не получается сделать с нормальным русским текстом(

int main(int argc, char* argv[])
{
	int number = 0;

	std::cin >> number;

	switch (number / 100)
	{
	case 1:
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыреста ";
		break;
	case 5:
		std::cout << "пятьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "девятьсот ";
		break;
	}
	if ((number % 100) / 10 != 1)
	{
		switch ((number % 100) / 10)
		{
		case 2:
			std::cout << "двадцать ";
			break;
		case 3:
			std::cout << "тридцать ";
			break;
		case 4:
			std::cout << "сорок ";
			break;
		case 5:
			std::cout << "пятьдесят ";
			break;
		case 6:
			std::cout << "шестьдесят ";
			break;
		case 7:
			std::cout << "семьдесят ";
			break;
		case 8:
			std::cout << "восемьдесят ";
			break;
		case 9:
			std::cout << "девяносто ";
			break;
		}
		switch (number % 10)
		{
		case 1:
			std::cout << "один банан.";
			break;
		case 2:
			std::cout << "два банана.";
			break;
		case 3:
			std::cout << "три банана.";
			break;
		case 4:
			std::cout << "четыре банана.";
			break;
		case 5:
			std::cout << "пять бананов.";
			break;
		case 6:
			std::cout << "шесть бананов.";
			break;
		case 7:
			std::cout << "семь бананов.";
			break;
		case 8:
			std::cout << "восемь бананов.";
			break;
		case 9:
			std::cout << "девять бананов.";
			break;
		case 0:
			std::cout << "бананов.";
			break;
		}
	}
	else
	{
		switch (number % 10)
		{
		case 0:
			std::cout << "десять бананов.";
			break;
		case 1:
			std::cout << "одиннадцать бананов.";
			break;
		case 2:
			std::cout << "двенадцать бананов.";
			break;
		case 3:
			std::cout << "тринадцать бананов";
			break;
		case 4:
			std::cout << "четырнадцать бананов.";
			break;
		case 5:
			std::cout << "пятнадцать бананов.";
			break;
		case 6:
			std::cout << "шестнадцать бананов";
			break;
		case 7:
			std::cout << "семнадцать бананов.";
			break;
		case 8:
			std::cout << "восемнадцать бананов.";
			break;
		case 9:
			std::cout << "девятнадцать бананов.";
			break;
		}
	}

	return EXIT_SUCCESS;
}