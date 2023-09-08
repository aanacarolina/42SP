#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_swap(int *a, int *b){

    int temp;
    temp = *a;
     *a = *b;
    *b = temp;

}

//modificar valores dentro de uma função
//caminhar no proximo 

int main (void){
    
int *pa;
int *pb;
printf("pa  [%d]", *pa);
printf("pb  [%d]", *pb);

int a;
int b;
a = 3;
b = 6;
pa = &a;
pb = &b;

printf("pa antes [%d]", *pa);
printf("pb antes [%d]", *pb);
ft_swap(pa, pb);
printf("pa dps [%d]", *pa);
printf("pb dps [%d]", *pb);

return (0);
}
 

