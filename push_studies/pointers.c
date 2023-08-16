#include <stdio.h>

int main(void){
int pp = 1; //valor 1 - end 0x16ce0ac28
int *pp_address = &pp; //valor 0x16ce0ac28 - end 
int **address_of_pp_address = &pp_address;
int *address_of_pp_again = &pp;

printf("%lu %lu \n", sizeof(pp), sizeof(pp_address));

printf("[%d] [%p] [%p] [%p]  \n", pp, pp_address, &pp, address_of_pp_again);
printf("[%p] endereço de pp_address \n", &pp_address);
printf("[%p] endereço de pp \n", *address_of_pp_address);

return(0);
}
