#include <stdio.h>

void ft_3(int *nbr)
{
    int num = 42;
    nbr = &num;
    printf("%p NBR \n", nbr);
    printf("%d *NBR \n", *nbr);
}

/*void ft_2(int *nbr)
{
    nbr = 42;
}*/

void ft_1(int *nbr)
{
    *nbr = 42;
}

int main(void)
{

    int *p1; 
    int *p2;
    int *p3;

    ft_1(p1);
    printf("%d P1 \n", *p1); //aqui traz 42
    printf("%p P1 \n", *p1); //aqui traz 42 em hexa pq é como %P é expressado
    printf("%p P1 \n", p1); //end de onde 42 está
    printf("%p P1 \n", &p1); //end da propria variavel P1
    printf("%d P1 \n", p1); //end de onde 42 está em int


    return(0);
}