#include <unistd.h>
#include <stdlib.h>

static int mini_atoi (char *a, int toi)
{
    if(!*a) 
        return(toi);
    int digit = *a - '0';
    toi =  toi * 10 + digit;
    return(mini_atoi (a + 1, toi));
}

void	ft_putnbr(int n)
{
	char digit;
	
	if (n > 9)
		ft_putnbr( n / 10);
    digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_putnbr(mini_atoi(argv[1], 0));
    write(1, "\n", 1);
    return (0);
}