#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	float sum = 1.0;
	float factn = 1.0;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		factn *= i;
		sum += 1 / factn;
	}

	std::cout << sum;

	// ��� � �����, ������� ���������� ������� ����� � �������� �� 5 ����� ����� �����, �� ������� ���������� ��������
	//if (int((sum - int(sum)) * 1000000) % 10 >= 5) 
	//{
	//	std::cout << sum + 0.00001;
	//}
	//else
	//{
	//	std::cout << sum;
	//}

	return EXIT_SUCCESS;
}