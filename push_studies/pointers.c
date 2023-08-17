#include <stdio.h>

int main(void){
int number_one = 1; //valor 1 - end 0x16ce0ac28
int* one_address = &number_one; //valor 0x16ce0ac28 - end 
int** address_of_one_address = &one_address; //1 

printf("%lu %lu \n", sizeof(number_one), sizeof(one_address));

printf("[%d] valor de PP  \n", number_one);
printf("[%p] valor de pp_address \n", one_address);
printf("[%p] endereço de pp direto \n", &number_one);
printf("[%p] endereço de pp \n", *address_of_one_address);
printf("[%d] valor de one usando ponteiro de ponteiro \n \n", **address_of_one_address);
printf("[%p] end de number one \n", *address_of_one_address);
printf("[%d] valor de number one \n", **address_of_one_address);
printf("[%p] conteudo de address_of_one_address \n", address_of_one_address);
printf("[%p] endereço de one_address \n", one_address);
printf("[%p] end de number one \n", &number_one);


return(0);
}
