#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

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

typedef struct s_node
{
	int data;			 // variable name and content
	struct s_node *next; // only pointer can hold add to another variable
						 // ponteiro tem que ser do mesmo typo do dado que aponta
} t_node;

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

void TESTE_create_node(int argc, char **argv)
{

	(void)argc;
	t_node *node_criado = create_node(atoi("145"), NULL);
	assert(node_criado->data == 145);
	assert(node_criado->next == NULL);
	t_node *next_node = create_node(atoi("2"), NULL);
	insert_tail(node_criado, next_node);
	assert(node_criado->next == next_node);
	assert(node_criado->next->data == 2);
	assert(node_criado->next->next == NULL);
	t_node *new_tail = create_node(atoi("3"), NULL);
	insert_tail(node_criado, new_tail);
	assert(new_tail->data == 13);
	assert(new_tail->next == NULL);
	assert(next_node->next == new_tail);
	assert(node_criado->next->next == new_tail);
	assert(node_criado->next->next->next == NULL);
	assert(node_criado->next->next->data == 42);
	free(node_criado);
	free(next_node);
	free(new_tail);
	printf("CANSEI DESSA MSG, MUDEI🎊 BORA,,MAIS🎊\n");
}

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



// prints a linked list with its nodes
void DEBUG_printlist(t_node *head)
{
	t_node *temp;
	int i;

	i = 0;
	if (head == NULL){
		printf("this list is NULL");
		return;
	}
	temp = head;
	printf("node [%i]: data: [%i]\n", i, temp->data);
	i++;
	while (temp != NULL){
		temp = temp->next;
		if(temp != NULL){
			printf("node [%i]: data: [%i]\n", i, temp->data);
			i++;
		}
	}
}

void TESTE_arguments_to_list(int argc, char **argv)
{
	t_node *llist = arguments_to_list(argc, argv);
	DEBUG_printlist(llist);
}

int main(int argc, char **argv)
{

	if(argc < 3){
		printf("you need to provide at least 2 arguments\n");
	}
	
	
	//TESTE_create_node(argc, argv);
	TESTE_arguments_to_list(argc, argv);
	return (0);
}

//TODO: validar qty argumentos
//TODO: se é INT - e nao char ou
//TODO: que são entre ou igual MIN INT e MAX INT
//TODO: sinais
//TODO: valores unicos