#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == ' ')
			break ;
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		first_word(argv[1]);
	return (0);
}
