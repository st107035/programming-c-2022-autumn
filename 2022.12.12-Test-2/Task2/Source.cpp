#include<iostream>

void Reverse(int a[], int n)
{
	if (n - 1 == 0)
	{
		std::cout << a[n - 1];
	}
	else
	{
		std::cout << a[n - 1] << ' ';
		Reverse(a, n - 1);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	Reverse(a, n);
}