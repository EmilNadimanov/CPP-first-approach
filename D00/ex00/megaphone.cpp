#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <cctype>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char *c;
	int input;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	input = 1;
	while (input < argc)
	{
		c = argv[input];
		while (*c)
		{
			*c = toupper(*c);
			ft_putchar(*c);
			c++;
		}
		input++;
	}
	ft_putchar('\n');
	return 0;
}
