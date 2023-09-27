#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/* Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$> */

int is_prime(int n)
{
    int i = --n;

    if(n > 1)
    {
       while(i > 1)
       {
            if(n % i != 0)
            {
                printf("if");
                i--;
            }
            else
            return (0);
       } 
    }
    return(1);
}

int main(int argc, char **argv)
{
    /*int acc;
    int i;
    int n;
    acc = 0;
    i = 0;
    n = atoi(argv[1]);

    if (argc != 2 || n < 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    else
    {
        if (n > 1)
            while (i < n)
            {
                i = isprime(n);
                acc += i;
            }
        return (acc + n);
    }*/
 
    printf("%i", is_prime(atoi(argv[1])));
    return(0);
    
}
