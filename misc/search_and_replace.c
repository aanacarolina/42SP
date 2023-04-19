#include <unistd.h>
#include <stdlib.h>

int str_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void put_char(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, str, 1);
		i++;
	}
}

void search_and_replace(char *str, char target, char replace)
{
	int i = 0;
	int size = str_len(str);

	while (i < size)
	{
		if (str[i] == target)
		{
			str[i] = replace;
			write(1, str[i], 1);

		}
		i++;
	}
	write(1, '\n', 2);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 2);
		exit(0);
	}
	search_and_replace(argv[1], argv[2][0], *argv[3]);
	return (0);
}