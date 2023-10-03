#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

void ft_last_word(char *str)
{
    int i = ft_strlen(str);
    i--;

    while (str[i] == ' ' || str[i] == '\t')
    {
        i--;
    }
    while (i > 0 && (str[i] != ' ' || str[i] != '\t'))
    {
        i--;
    }
    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            break;
        }
        else
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        ft_last_word(argv[1]);
    return (0);
}

/*

gcc -Wall -Werror -Wextra last_word.c && ./a.out "FOR PONY" | cat -e
PONY$
gcc -Wall -Werror -Wextra last_word.c && ./a.out "this        ...       is sparta, then again, maybe    not" | cat -e
not$
gcc -Wall -Werror -Wextra last_word.c && ./a.out "   " | cat -e
$
gcc -Wall -Werror -Wextra last_word.c && ./a.out "a" "b" | cat -e
$
gcc -Wall -Werror -Wextra last_word.c && ./a.out "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

*/