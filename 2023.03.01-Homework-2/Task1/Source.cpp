#include<iostream>
#include<string>

enum AnimalType // �������� ����������� �������� � ��� �������, � ������� ��� ���� � ���� ������� 
{
	None = 0,
	jay = 1, //�����
	marten = 2, //������ 
	fox = 3, //����
	hog = 4, //�����
	wolf = 5 //���� 
};

class Animal
{
private:
	AnimalType type;
	int power;
public:
	std::string name;
	Animal() : name(""), type(None), power(0) {};
	Animal(std::string name, AnimalType type, int power) : name(name), type(type), power(power) {};
	Animal(const Animal& creature) : name(creature.name), type(creature.type), power(creature.power) {};

	~Animal() {}

	int getPower()
	{
		return power;
	}
	AnimalType getType()
	{
		return type;
	}

	void setPower(int power) ///������������ ������������� ���� ���� � ��������� ������, ����, ���� ��� ����� �������� �� (������ ���������)
	{
		if (this->power == 0) 
		{
			this->power = power;
		}
		else 
		{
			this->power = 0;
		}
	}
	void setType(AnimalType type) /// ��� ��������������� ������ � ��������� ������
	{
		if (this->type == None)
		{
			this->type = type;
		}
	}

	void printInfo()
	{
		std::cout << name << ' ' << type << ' ' << power << std::endl;
	}
	void Mighter()
	{
		power += 1;
	}
};

void animalFight(Animal& hunter, Animal& prey)
///1. �������� ����� 100% ������ �������� �������� ���� � ������� �����. �� �������� ���� ���������� �������� ������ ���� (� �������������� �������� � ����) ������ ������ ���� ��������.
///2. ����������, �� �������� ���� ��������, � ������ ���� � ��������� �������� ���� ������������� ������ ����, ������ ������ ���� ��������.
///3. ��������, ������� ������������ �������������� � ���� (� ��� ����), ����� ������ �������� ������ ���� ��� ����� (�� �� ������) �������� ������� ����.
///4. �������� ��������, ����������� �����.
///5. ������ ��� �������� (�� ���������) �������� ���� ������� ����.
{
		if ((hunter.getType() > prey.getType()) && (hunter.getPower() >= prey.getPower())) 
		{
			prey.setPower(0); 
			hunter.Mighter();
		}
		if ((hunter.getType() == prey.getType()) && (hunter.getPower() >= 2*prey.getPower())) 
		{
			prey.setPower(0);
			hunter.Mighter();
		}
		if ( ((hunter.getType() < prey.getType()) && (hunter.getPower() >= 2 * prey.getPower())) || ((hunter.getType() > prey.getType()) && (prey.getPower() >= 2 * hunter.getPower())))
		{
			prey.setPower(0);
		}
		if ((hunter.getType() < prey.getType()) && (prey.getPower() >= hunter.getPower()))
		{
			hunter.setPower(0);
			prey.Mighter();
		}
		if ( ((hunter.getType() == prey.getType()) && (hunter.getPower() < 2 * prey.getPower())) ||
			((hunter.getType() < prey.getType()) && (hunter.getPower() < 2 * prey.getPower()) && (hunter.getPower() > prey.getPower())) ||
			((hunter.getType() > prey.getType()) && (prey.getPower() < 2 * hunter.getPower()) && (prey.getPower() > hunter.getPower())) )
		{
			int prob = rand() % 100; 
			if (prob >= 50)
			{
				prey.setPower(0);
				hunter.Mighter();
			}
			else
			{
				hunter.setPower(0);
				prey.Mighter();
			}
		}
}

int main(int argc, char* argv[])
{
	Animal* forest = new Animal[100];
	srand(time(0)); // ��� ���� ��������� ���� ������-�� ��������� ����� �� �������� ����������

	for (int i = 0; i < 100; ++i)
	{
		forest[i].name = "animal" + std::to_string(i); //�������
		switch (rand() % 5)
		{
		case 0:
			forest[i].setType(wolf);
			forest[i].setPower(AnimalType::wolf);
			break;
		case 1:
			forest[i].setType(jay);
			forest[i].setPower(AnimalType::jay);
			break;
		case 2:
			forest[i].setType(marten);
			forest[i].setPower(AnimalType::marten);
			break;
		case 3:
			forest[i].setType(fox);
			forest[i].setPower(AnimalType::fox);
			break;
		case 4:
			forest[i].setType(hog);
			forest[i].setPower(AnimalType::hog);
			break;
		}
		forest[i].printInfo();
	}
	std::cout << std::endl;

	int n = 100;

	while (n != 1)
	{
		for (int i = 0; i < n / 2; ++i)
		{
			if ((n % 2 != 0) && (i == n / 2))
			{
				continue;
			}
			else
			{
				animalFight(forest[i], forest[n - i - 1]);
				if (forest[n - i - 1].getPower() > forest[i].getPower())
				{
					Animal c = forest[n - i - 1];
					forest[n - i - 1] = forest[i];
					forest[i] = c;
				}
			}
		}
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = n / 2 + 1;
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		forest[i].printInfo();
	}

	delete[] forest;
	return EXIT_SUCCESS;
}