#include <iostream>
#include <string>

std::string Ast(std::string s, int len)
{
	if (len == 1)
	{
		return s;
	}
	else
	{
		std::string s0;
		for (int i = 0; i < len - 1; ++i)
		{
			s0 += s[i];
		}
		return Ast(s0, len - 1) + '*' + s[len - 1];
	}
}

int main(int argc, char* argv[])
{
	std::string str{};
	std::cin >> str;

	std::cout << Ast(str, str.length());

	return EXIT_SUCCESS;
}