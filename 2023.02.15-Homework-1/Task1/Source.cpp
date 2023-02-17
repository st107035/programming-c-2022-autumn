#include<iostream>
#include<string>

struct Animal
{
	std::string type;
	std::string name;
	int age;
	Animal()
	{
		this->type = "cat";
		this->name = "Barsik";
		this->age = 10;
	}
	Animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}
	Animal(const Animal& Creature)
	{
		this->type = Creature.type;
		this->name = Creature.name;
		this->age = Creature.age;
	}
	~Animal()
	{

	}
	void elderAnimal()
	{
		age += 1;
	}
};

void printAnimal(struct Animal Creature)
{
	std::cout << Creature.type << " " << Creature.name << " " << Creature.age << std::endl;
}

int main(int argc, char* argv[])
{
	Animal Default;
	printAnimal(Default);
	Animal Birdie("parrot", "Kesha", 3);
	Birdie.elderAnimal();
	printAnimal(Birdie);

	return EXIT_SUCCESS;
}