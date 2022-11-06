#include<iostream>

int main(int argc, char* argv[])
{
	int m[1001]{ 0 };
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		m[i] = m[i - 1] + 1;
	}
	
	std::cin >> a >> b >> c >> d;

	int m1[1001]{ 0 };

	for (int i = 0; i <= n; ++i)
	{
		if ((i >= a) && (i <= b))
		{
			m1[i] = m[b - (i - a)];
		}
		else
		{
			m1[i] = m[i];
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		if ((i >= c) && (i <= d))
		{
			m[i] = m1[d - (i - c)];
		}
		else
		{
			m[i] = m1[i];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		std::cout << m[i] << " ";
	}

	return EXIT_SUCCESS;
}