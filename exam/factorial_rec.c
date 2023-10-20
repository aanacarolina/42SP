#include <stdio.h>

int	factorial_r(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial_r(n - 1));
}

int	main(void)
{
	printf("5= %i\n", factorial_r(5));
	printf("10= %i\n", factorial_r(10));
	printf("3= %i\n", factorial_r(3));
	return (0);
}

/*

fact = 5 * 4 * 3 * 2 * 1 =
call 1  = 5 * 4
result 20
call 2 = 20 * 3
result = 60
call 3 = 60 * 2
result = 120
call 4 = 120 * 1
result  = 120
end
*/