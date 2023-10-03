#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}


char    *ft_strrev(char *str)
{
	int len = ft_strlen(str);
	int j = 0;
	char temp;

	len--;
	while (len > j)
	{
		printf("%s \n", str);
		temp = str[j];
		str[j] = str[len];
		str[len] = temp;
		printf("%c = %c \n", temp, str[j]);
		printf("%c = %c \n", str[j], str[len]);
		printf("%c = %c \n", str[len], temp);
		printf("[i][%i] / [j][%i]\n\n", len, j);
		len--;
		j++; 
	}
	return(str);
}

int main (int argc, char **argv)
{
	if(argc == 2)
		printf("%s", ft_strrev(argv[1]));
	return(0);
}

/*
gcc -Wall -Werror -Wextra ft_strrev.c && ./a.out "zaz" | cat -e
zaz$

gcc -Wall -Werror -Wextra ft_strrev.c && ./a.out "dub0 a POIL" | cat -e
LIOP a 0bud$

gcc -Wall -Werror -Wextra ft_strrev.c && ./a.out  | cat -e
$

*/