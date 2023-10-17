#include <stdio.h>

int	factorial(int n)
{
    int i;
	int	result;
	while (n > 0)
	{
		result = result * n--;
	}
	return (result);
}

int main(void)
{

    printf("%i", factorial(5));
    return(0);
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