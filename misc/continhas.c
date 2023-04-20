#include <math.h>
#include <stdio.h>

int roots()
{
	double calcs = (sqrt(2) * sqrt(3) / sqrt(3) * sqrt(2));
	double first_square = (sqrt(2) * sqrt(3));
	double divided = (first_square / sqrt(3));
	double multiplied = (divided * sqrt(2));
	
	return (calcs);
}
int perim_tri(int lado_a, int lado_b, int lado_c)
{
	return (lado_a + lado_b + lado_c);
}

double pytha(int a, int b)
{
	int c = ((a * a) + (b * b));
	return(sqrt(c));
}

int main(void)
{

	printf("roots %i \n\n", roots());
	printf("PERIM %i: \n\n", perim_tri(3, 3, 3));
	printf("hypotenuse %f: \n\n", pytha(15, 30));
	return (0);
}
