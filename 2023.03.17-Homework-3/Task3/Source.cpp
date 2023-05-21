#include <iostream>

struct Shape
{
public: 
	int a;
	int b;
	int c;
	int d;

	Shape(int a = 0, int b = 0, int c = 0, int d = 0) : a(a), b(b), c(c), d(d) {};
	Shape(const Shape& figure) : a(figure.a), b(figure.b), c(figure.c), d(figure.d) {};

	void printsides()
	{
		std::cout << a << " " << b << " " << c << " " << d << std::endl;
	}

	~Shape() {};
};

struct Rectangle : public Shape
{
	Rectangle(int a = 0, int b = 0) : Shape(a, b, a, b) {};

	double area()
	{
		return a * b;
	}

	~Rectangle() {}
};

struct Square : public Rectangle
{
	Square(int a = 0) : Rectangle(a, a) {};

	double area()
	{
		return a * a;
	}

	~Square() {};
};

struct Triangle : public Shape
{
	Triangle(int a = 0, int b = 0, int c = 0) : Shape(a, b, c) {};

	double area()
	{
		double p = 0.5 * (a + b + c);
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}

	~Triangle() {};
};

struct Circle : public Shape
{
	Circle(int a = 0) : Shape(a) {};

	double area()
	{
		return (3.14) * (a * a);
	}

	~Circle() {};
};

int main(int argc, char* argv[])
{	
	Rectangle rect;
	rect.a = 3;
	rect.b = 4;

	rect.printsides();
	std::cout << rect.area() << std::endl;

	Square sq;
	sq.a = 3;

	sq.printsides();
	std::cout << sq.area() << std::endl;

	Triangle tr;
	tr.a = 3;
	tr.b = 4;
	tr.c = 5;

	tr.printsides();
	std::cout << tr.area() << std::endl;

	Circle circ;
	circ.a = 3;

	circ.printsides();
	std::cout << circ.area() << std::endl;

	return EXIT_SUCCESS;
}