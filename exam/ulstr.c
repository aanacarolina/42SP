#include <unistd.h>

void ul_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		ul_str(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}

// 'a' = \char
// "a" = []string
