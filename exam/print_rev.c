#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_print_rev(char *str)
{
    int i = ft_strlen(str);
    i--; // ignorar o \0
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    else
    {
        ft_print_rev(argv[1]);
    }
    return(0);
}

/*
gcc -Wall -Werror -Wextra print_rev.c && ./a.out "zaz" | cat -e
zaz$

gcc -Wall -Werror -Wextra print_rev.c && ./a.out "dub0 a POIL" | cat -e
LIOP a 0bud$

gcc -Wall -Werror -Wextra print_rev.c && ./a.out  | cat -e
$

*/