#include "./push_swap.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	TESTE_create_node(int argc, char **argv)
{

	(void)argc;
	t_node *node_criado = create_node(atoi(argv[1]), NULL);
	assert(node_criado->data == atoi(argv[1]));
	assert(node_criado->next == NULL);
	t_node *next_node = create_node(atoi(argv[2]), NULL);
	insert_tail(node_criado, next_node);
	assert(node_criado->next == next_node);
	assert(node_criado->next->data == atoi(argv[2]));
	assert(node_criado->next->next == NULL);
	t_node *new_tail = create_node(atoi(argv[3]), NULL);
	insert_tail(node_criado, new_tail);
	assert(new_tail->data == atoi(argv[3]));
	assert(new_tail->next == NULL);
	assert(next_node->next == new_tail);
	assert(node_criado->next->next == new_tail);
	assert(node_criado->next->next->next == NULL);
	assert(node_criado->next->next->data == atoi(argv[1]));
	free(node_criado);
	free(next_node);
	free(new_tail);
	printf("[end of create node]👌 \n");
}

void	TESTE_args_checker(void)
{

	char *argv[] = {"./a.out", "145", "13", "145", "42"};
	printf("dup found - must fail\n");
	assert(dups_checker(5, argv) == 1);
	char *argv_2[] = {"./a.out", "13", "145", "42"};
	printf("NO dup found - must work\n");
	assert(dups_checker(5, argv_2) == 0);
	printf("[end of dups checker]🎊 \n");
}

void	TESTE_non_int_checker(void)
{

	char *argv[] = {"./a.out", "145", "+13", "a", "42"};
	printf("must fail -> 1 \n");
	assert(non_int_checker(5, argv) == 0);
	char *argv_1[] = {"./a.out", "145", "++13", "42"};
	printf("must fail -> 2 \n");
	assert(non_int_checker(4, argv_1) == 0);
	char *argv_2[] = {"./a.out", "13", "145", "42", "99", "+89347", "-94", "-2147483648", "+2147483647"};
	printf("must work\n");
	assert(non_int_checker(9, argv_2) == 1);
	printf("fim do teste do non_int_checker \n");
}

void	TESTE_max_min_int_checker(void)
{
char *argv_1[] = {"./a.out", "13", "145", "42", "99", "+89347", "-94", "-2147483648", "+2147483647"};
	printf("max-min-int works 'o/\n");
	assert(max_min_int_checker(9, argv_1) == 1);
char *argv_2[] = {"./a.out", "13", "145", "42", "214755483647"};
	printf("max-min-int fails /o \n");
	assert(max_min_int_checker(5, argv_2) == 0);
	printf("[end of max-min-int-checker] 🤛\n ");
}

// prints a linked list with its nodes
void	DEBUG_printlist(t_node *head)
{
	t_node *temp;
	int i;

	i = 0;
	if (head == NULL)
	{
		printf("this list is NULL");
		return;
	}
	temp = head;
	printf("node [%i]: data: [%i]\n", i, temp->data);
	i++;
	while (temp != NULL)
	{
		temp = temp->next;
		if (temp != NULL)
		{
			printf("node [%i]: data: [%i] next: [%p] \n", i, temp->data,
				temp->next);
			i++;
		}
	}
}

void	TESTE_arguments_to_list(int argc, char **argv)
{
	t_node *llist = arguments_to_list(argc, argv);
	DEBUG_printlist(llist);
}

void	TESTE_push_a(int argc_a, char **list_a, int argc_b, char **list_b)
{
	t_node	*listinha_a;
	t_node	*listinha_b;

	// char *args_b[] = {"./program", "20", "40", "60", "80", "100"};
	// listinha_b = NULL; //not a list yet,


	listinha_a = arguments_to_list(argc_a, list_a);
	listinha_b = arguments_to_list(argc_b, list_b);
	printf("PA A\n");
	DEBUG_printlist(listinha_a);
	printf("\n PA B \n");
	DEBUG_printlist(listinha_b);
	pa(&listinha_a, &listinha_b);
	printf("\n PA A\n");
	DEBUG_printlist(listinha_a);
	printf("\n PA B \n");
	DEBUG_printlist(listinha_b);
	printf("\n ---------------------------------- \n");
}

void	TESTE_push_b(int argc_a, char **list_a, int argc_b, char **list_b)
{
	// char *args_b[] = {"./program", "20", "40", "60", "80", "100"};
	// listinha_b = NULL; //not a list yet,

	t_node *listinha_a = arguments_to_list(argc_a, list_a);
	t_node *listinha_b = arguments_to_list(argc_b, list_b);
	printf("PA A\n");
	DEBUG_printlist(listinha_a);
	printf("\n PA B \n");
	DEBUG_printlist(listinha_b);
	pb(&listinha_a, &listinha_b);
	printf("\n PA A\n");
	DEBUG_printlist(listinha_a);
	printf("\n PA B \n");
	DEBUG_printlist(listinha_b);
	printf("\n ---------------------------------- \n");
}