#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../push_swap.h"

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

depois mudar o valor da anterior, que era NULL, para o node que acabamos de criar

*/

// creates (already allocating memory for) a node - remember to free after using it
t_node *create_node(int data, t_node *next)
{
	t_node *node;

	node = calloc(1, sizeof(t_node));
	node->data = data;
	node->next = next;
	return (node);
}

// inserts a node(new_last_node) at the end of a list(head)
void insert_tail(t_node *head, t_node *new_last_node)
{
	t_node *temp;

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

//creates a llist from arguments 
t_node *arguments_to_list(int argc, char **argv)
{

	int i;
	t_node *head;
	t_node *new_node;

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


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("🚪 EXIT \n");//TODO remove at the end
		exit(1);
	}

	TESTE_create_node(argc, argv);
	TESTE_arguments_to_list(argc, argv);
	TESTE_args_checker();
	TESTE_non_int_checker();
	TESTE_max_min_int_checker();
	return (0);
}

// TODO: validar qty argumentos -
// If no parameters are specified, the program must not display anything and give the prompt back.

// TODO: se é INT - e nao char ou
// TODO: que são entre ou igual MIN INT e MAX INT
// TODO: sinais (ATOI?)
// TODO: valores unicos

/*

• In case of error, it must display "Error" followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer and/or there are duplicates.
*/