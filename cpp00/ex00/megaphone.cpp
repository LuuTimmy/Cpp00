#include <iostream>

int to_upper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				std::cout << (char) to_upper(argv[i][j]);
			}
		}
	}
	std::cout << "\n";
	return (0);
}
