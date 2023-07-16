typedef struct s_node
{
	int data; //variable name and content
	struct node *next; //only pointer can hold add to another variable
	//ponteiro tem que ser do mesmo typo do dado que aponta
} t_node;




/*
Llista encadeada - dynamic size
Array - fixed size


Acessar
O(n) worst case
Na lista encadeada, somente acesso sequencial, ou seja, passando de node em node até chegar onde quiser.
O(1)
Array por sua vez tem acesso direto, ou seja, informe a posição vá la direto

Inserir/Delete

BEGINNING
LL - O(1)
A - O(N) - pq temos que empurrar todos os elementos para a posição seguinte

AT END
LL - O(N)
A - O(1)

AT Nth POSITION
LL - O(N) (proportional to number of elements)
A - O(N) (proportional to number of elements)

O(n) worst case
Array

-------
Não é posssível fazer busca binaria em listas encadeadas

*/
