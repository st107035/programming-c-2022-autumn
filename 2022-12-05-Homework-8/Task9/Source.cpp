#include <iostream>
#include <string>

std::string Removal(std::string ins, int i, int len)
{
	if (i > 0)
	{
		if (ins[i] == ins[len - i - 1])
		{
			if ((len % 2 == 1) && (i == len / 2))
			{
				return Removal(ins, i - 1, len) + ins[i];
			}
			else
			{
				return Removal(ins, i - 1, len) + '0';
			}
		}
		else
		{
			return Removal(ins, i - 1, len) + ins[i];
		}
	}
	else
	{
		if (ins[i] == ins[len - i - 1])
		{
			return "0";
		}
		else
		{
			return { ins[i] };
		}
	}
}

int main(int argc, char* argv[])
{
	std::string str{};
	std::string str1{};
	std::cin >> str;

	str = Removal(str, str.length() - 1, str.length());

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] != '0')
		{
			str1 += str[i];
		}
	}

	std::cout << str1;

	return EXIT_SUCCESS;
}