#include "../push_swap.h"


/*
Llista encadeada - dynamic size
Array - fixed size


Acessar
O(n) worst case
Na lista encadeada, somente acesso sequencial, ou seja,
	passando de node em node até chegar onde quiser.
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

/*
create node
data = valor da variavel
next = valor do atual primeiro node

depois mudar o valor de head para o node que acabamos de criar

*/

/*
create node
data = valor da variavel
next = null

depois mudar o valor da anterior, que era NULL,
	para o node que acabamos de criar

*/

// creates (already allocating memory for) a node -> remember to free after using it
t_node	*create_node(int data, t_node *next)
{
	t_node	*node;

	node = calloc(1, sizeof(t_node));
	node->data = data;
	node->next = next;
	return (node);
}

// inserts a node(new_last_node) at the end of a list(head)
void	insert_tail(t_node *head, t_node *new_last_node)
{
	t_node	*temp;

	if (head->next == NULL)
	{
		head->next = new_last_node;
	}
	else
	{
		temp = head->next;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_last_node;
	}
}

// creates a llist from arguments
t_node	*arguments_to_list(int argc, char **argv)
{
	int		i;
	t_node	*head;
	t_node	*new_node;

	head = create_node(atoi(argv[1]), NULL);
	i = 2;
	while (i != argc)
	{
		new_node = create_node(atoi(argv[i]), NULL);
		insert_tail(head, new_node);
		i++;
	}
	return (head);
}
