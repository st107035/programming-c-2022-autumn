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
	Animal(const Animal& creature)
	{
		this->type = creature.type;
		this->name = creature.name;
		this->age = creature.age;
	}
	~Animal()
	{

	}
};

void printAnimal(struct Animal creature)
{
	std::cout << creature.type << " " << creature.name << " " << creature.age << std::endl;
}

void elderAnimal(struct Animal& creature)
{
	creature.age += 1;
}

int main(int argc, char* argv[])
{
	Animal def;
	printAnimal(def);
	Animal birdie("parrot", "Kesha", 3);
	elderAnimal(birdie);
	printAnimal(birdie);

	return EXIT_SUCCESS;
}