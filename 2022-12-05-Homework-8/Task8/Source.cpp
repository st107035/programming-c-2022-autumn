#include <iostream>;
#include <string>

std::string Brackets(std::string s, int len, int inlen)
{
	if (len == 1)
	{
		return s;
	}
	else
	{
		if (len <= (inlen / 2) + 1)
		{
			std::string s0{};
			for (int i = 0; i < len - 1; ++i)
			{
				s0 += s[i];
			}
			if (inlen % 2 == 1)
			{
				return Brackets(s0, len - 1, inlen) + '(' + s[len - 1];
			}
			else
			{
				if (len == (inlen / 2) + 1)
				{
					return Brackets(s0, len - 1, inlen) + s[len - 1];
				}
				else
				{
					return Brackets(s0, len - 1, inlen) + '(' + s[len - 1];
				}
			}
			s = {};
		}
		else
		{
			std::string s0{};
			for (int i = 0; i < len - 1; ++i)
			{
				s0 += s[i];
			}
			return Brackets(s0, len - 1, inlen) + ')' + s[len - 1];
			s = {};
		}
	}
}

int main(int argc, char* argv[])
{
	std::string str{};
	std::cin >> str;

	std::cout << Brackets(str, str.length(), str.length());

	return EXIT_SUCCESS;
}