#include<iostream>
//����� �� ���������� ������� � ���������� ������� �������(

int main(int argc, char* argv[])
{
	int number = 0;

	std::cin >> number;

	switch (number / 100)
	{
	case 1:
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}
	if ((number % 100) / 10 != 1)
	{
		switch ((number % 100) / 10)
		{
		case 2:
			std::cout << "�������� ";
			break;
		case 3:
			std::cout << "�������� ";
			break;
		case 4:
			std::cout << "����� ";
			break;
		case 5:
			std::cout << "��������� ";
			break;
		case 6:
			std::cout << "���������� ";
			break;
		case 7:
			std::cout << "��������� ";
			break;
		case 8:
			std::cout << "����������� ";
			break;
		case 9:
			std::cout << "��������� ";
			break;
		}
		switch (number % 10)
		{
		case 1:
			std::cout << "���� �����.";
			break;
		case 2:
			std::cout << "��� ������.";
			break;
		case 3:
			std::cout << "��� ������.";
			break;
		case 4:
			std::cout << "������ ������.";
			break;
		case 5:
			std::cout << "���� �������.";
			break;
		case 6:
			std::cout << "����� �������.";
			break;
		case 7:
			std::cout << "���� �������.";
			break;
		case 8:
			std::cout << "������ �������.";
			break;
		case 9:
			std::cout << "������ �������.";
			break;
		case 0:
			std::cout << "�������.";
			break;
		}
	}
	else
	{
		switch (number % 10)
		{
		case 0:
			std::cout << "������ �������.";
			break;
		case 1:
			std::cout << "����������� �������.";
			break;
		case 2:
			std::cout << "���������� �������.";
			break;
		case 3:
			std::cout << "���������� �������";
			break;
		case 4:
			std::cout << "������������ �������.";
			break;
		case 5:
			std::cout << "���������� �������.";
			break;
		case 6:
			std::cout << "����������� �������";
			break;
		case 7:
			std::cout << "���������� �������.";
			break;
		case 8:
			std::cout << "������������ �������.";
			break;
		case 9:
			std::cout << "������������ �������.";
			break;
		}
	}

	return EXIT_SUCCESS;
}