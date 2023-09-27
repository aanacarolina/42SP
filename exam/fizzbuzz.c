#include <unistd.h>
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
    int i = 1;

    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz\n", 8); // 9 ou 10 do \0?
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
            ft_putnbr(i);
        i++;
        write(1, "\n", 5);
    }
    return 0;
}