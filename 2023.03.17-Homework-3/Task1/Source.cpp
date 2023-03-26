#include <iostream>

struct Point
{
public: 
	int x;
	int y;

	Point() : x(0), y(0) {};
	Point(int x, int y) : x(x), y(y) {};
	Point(const Point& pair) : x(pair.x), y(pair.y) {};

	float distance()
	{
		return sqrt(x*x + y*y);
	}

	void print()
	{
		std::cout << x << " " << y << std::endl;
	}

	~Point()
	{

	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int y = 0;
	std::cin >> n;
	Point* a = new Point[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> x >> y;
		a[i] = Point(x, y);
	}

	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j < n - 1; ++j)
		{
			if (a[j].distance() > a[j + 1].distance())
			{
				Point c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		a[i].print();
	}

	delete[] a;

	return EXIT_SUCCESS;
}