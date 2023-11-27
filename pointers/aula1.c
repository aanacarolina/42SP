#include <stdlib.h> //standard library (linux basics)
#include <unistd.h> //
#include <stdio.h>  //input e output

// TYPES OF MEMORY ALLOCATION

// static (immutable)
// program life cycle - compile time
static int s = 2;
static char h = 'b';

// dynamic
// run time - heap
int oi(void)
{
    char *d = malloc(sizeof(char) * 4); // array -> aponta pra endereco inicial de espaco sequencial reservado
    free(d);
    return (0);
}

// automatic
// compile time - stack
int i = 1;
char c = 'c';

//---------------
// 1 - REF = atribuir valor / &
// 2 - DERREF = acessar valor / uso o * para nao mais ler o endereco e sim o valor /

// 1
int cinco = 5;
int *num = &cinco; // declaracao

// 2
void change_by_derref(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int one = 1;
    int *num = &one;
    printf("%i ANTES\n", one);
    printf("%i ats\n", *num);
    change_by_derref(num);
    printf("%i depois\n", one);
    printf("%i dps\n", *num);
}