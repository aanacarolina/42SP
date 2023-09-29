#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int n)
{
    char digit;

    if (n >= 10)
        ft_putnbr(n / 10);
    digit = (n % 10) + '0';
    write(1, &digit, 1);
    
}

int main(int argc, char **argv)
{
    ft_putnbr(atoi(argv[1]));
    return (0);
}

/*
int main(void)
{
    ft_putnbr(10);
    return (0);
}*/