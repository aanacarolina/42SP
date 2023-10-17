#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev_p2(char *str)
{
	int		i;
	int		k;
	int		j;
	char	temp;

	i = ft_strlen(str);
	k = 0;
	j = (ft_strlen(str) / 2);
	temp = str[k];
	i--;
	while (i > j)
	{
		temp = str[k];
		str[k] = str[i];
		str[i] = temp;
		i--;
		k++;
	}
	return (str);
}

int	main(void)
{
	char *no_strings_attached = "contatinho";
    printf("%s\n", ft_strrev_p2(no_strings_attached));
	return (0);
}

int	main(void)
{
	printf("%s\n", ft_strrev_p2("contatinho"));
	return (0);
}

int main (int argc, char **argv)
{
	if(argc == 2)
		printf("%s\n", ft_strrev_p2(argv[1]));
	return(0);
}

// gcc -Wall -Werror -Wextra ft_strrev_2.c && ./a.out "zaz" | cat -e
// gcc -Wall -Werror -Wextra ft_strrev_2.c && ./a.out "dub0 a POIL" | cat -e
// gcc -Wall -Werror -Wextra ft_strrev_2.c && ./a.out casinha  | cat -e
// gcc -Wall -Werror -Wextra ft_strrev_2.c && ./a.out  | cat -e
