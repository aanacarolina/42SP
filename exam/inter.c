#include <unistd.h>

int	is_dup(char *str, char c, int position)
{
	int	i;

	i = 0;
	while (i != position)
	{
		if (str[i] != c)
		{
			i++;
		}
		else
			return (-1);
	}
	return (position);
} 

void	ft_inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[j] && str2[j] != '\0')
		{
			j++;
		}
		else
		{
			if (is_dup(str1, str1[i], i) != -1)
			{
				if (str2[j] != '\0')
				{
					write(1, &str1[i], 1);
				}
				j = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		ft_inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}

/*
gcc -Wall -Werror -Wextra inter.c && ./a.out "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
gcc -Wall -Werror -Wextra inter.c && ./a.out ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
gcc -Wall -Werror -Wextra inter.c && ./a.out "rien" "cette phrase ne cache rien" | cat -e
rien$
gcc -Wall -Werror -Wextra inter.c && ./a.out | cat -e
$


cc -Wall -Werror -Wextra inter.c
	&& ./a.out "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
cc -Wall -Werror -Wextra inter.c
	&& ./a.out ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
cc -Wall -Werror -Wextra inter.c
	&& ./a.out "rien" "cette phrase ne cache rien" | cat -e
cc -Wall -Werror -Wextra inter.c && ./a.out | cat -e

*/