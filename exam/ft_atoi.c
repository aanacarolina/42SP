#include <unistd.h>
#include <stdio.h> 

void ft_putnbr(int n)
{
    int digit;
    if (n > 9)
        ft_putnbr(n / 10);
    digit = n % 10 + '0';
    write(1, &digit, 1);
}

int ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13 ))
    {
        i++;
    }
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;    
    while (str[i] >= '0' && str[i] <= '9' )
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (sign * result);
}

int main(int argc, char **argv)
{
    printf("%i", ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}