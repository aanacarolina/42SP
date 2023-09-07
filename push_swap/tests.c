#include "./push_swap.h"
#include <assert.h>

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
	printf("node [%i]: data: [%i] next: [%p] \n", i, temp->data,
				temp->next);
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
	printf("\n");
}

// prints the size of a stack
void	DEBUG_stack_size(t_node **stack)
{
	printf("SIZE of stack is [%d]\n", stack_size(stack));
}

// prints the position of a nodes
void	DEBUG_node_position(t_node **stack, int node)
{
	printf("NODE [%d] is at position [%d]\n", node, node_position(stack, node));
}

// prints last node of a stack
void	DEBUG_last_node(t_node **stack)
{
	printf("[%d] is the LAST NODE\n",last_node(stack));
}

// prints last node of a stack
void	DEBUG_max_min(t_node **stack)
{
	printf("⏫[%d] is the MAX\n",max_num(stack));
	printf("⏬[%d] is the MIN \n",min_num(stack));
}


void	DEBUG_size_3_checker(t_node **stack){
		
		int bool;

		bool = size_3_checker(stack);
		 
		if(bool == 1)
			printf("✅ [TRUE]\n");
		else
			printf("❌ [FALSE]\n");

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


void	DEBUG_llist(t_node **head_a, t_node **head_b)
{
	t_node **llist_a;
	t_node **llist_b;
	t_node *temp_head;

	llist_a = head_a;
	llist_b = head_b;
	temp_head = (*llist_a);

	printf("\n HEAD A [%p]", head_a); 
	//printf("\n HEAD A [%i]", head_a); 
	printf("\n *HEAD A [%p]", *head_a); 
	//printf("\n *HEAD A [%i]", *head_a); 
	//printf("\n **HEAD A [%p]", **head_a); 
	//printf("\n **HEAD A [%i]", **head_a);
	printf("\n & HEAD A DATA [%p]", &(*head_a)->data);
	printf("\n HEAD A DATA [%i]", (*head_a)->data);
	printf("\n HEAD A NEXT [%p]", (*head_a)->next);
	printf("\n HEAD A NEXT DATA [%i]", (*head_a)->next->data);
	printf("\n & HEAD A NEXT DATA [%p]", &(*head_a)->next->data);
	printf("\n HEAD A NEXT NEXT [%p]", (*head_a)->next->next);
	printf("\n HEAD A NEXT NEXT DATA [%i]", (*head_a)->next->next->data);
	printf("\n & HEAD A NEXT NEXT DATA [%p]", &(*head_a)->next->next->data);
	printf("\n HEAD A NEXT NEXT NEXT [%p]", (*head_a)->next->next->next);
	printf("\n HEAD A NEXT NEXT NEXT DATA [%i]", (*head_a)->next->next->next->data);
	printf("\n & HEAD A NEXT NEXT NEXT DATA [%p]", &(*head_a)->next->next->next->data);
	printf("\n --------------- \n");
	printf("\n list a [%p]", llist_a);
	printf("\n list a data [%i]", (*llist_a)->data);
	printf("\n list a next [%p]", (*llist_a)->next);
	printf("\n list a next data [%i]", (*llist_a)->next->data);
	printf("\n & list a next data [%p]", &(*llist_a)->next->data);
	printf("\n --------------- \n");
	printf("\n HEAD B [%p]", head_b);
	printf("\n HEAD B DATA[%i]", (*head_b)->data);
	printf("\n HEAD B NEXT [%p]", (*head_b)->next);
	printf("\n HEAD B NEXT DATA [%i]", (*head_b)->next->data);
	printf("\n & HEAD B NEXT DATA [%p]", &(*head_b)->next->data);
	printf("\n --------------- \n");
	printf("\n list b [%p]", llist_b);
	printf("\n list b data [%i]", (*llist_b)->data);
	printf("\n list b next [%p]", (*llist_b)->next);
	printf("\n list b next data [%i]", (*llist_b)->next->data);
	printf("\n & list b next data [%p]", &(*llist_b)->next->data);
	printf("\n --------------- \n");
	printf("\n temp [%p]", temp_head);
	printf("\n temp data[%i]", (temp_head)->data);
	printf("\n temp next [%p]", (temp_head)->next);
	printf("\n temp next data [%i]", (temp_head)->next->data);
	printf("\n & temp next data [%p]\n", &(temp_head)->next->data);


	
}


void	DEBUG_one_item_llist(t_node **head_a, t_node **head_b)
{
	t_node **llist_a;
	t_node **llist_b;
	t_node *temp_head;

	llist_a = head_a;
	llist_b = head_b;
	temp_head = (*llist_a);

	
	
	printf("\n & HEAD A DATA [%p]", &(*head_a)->data);
	printf("\n HEAD A DATA [%i]", (*head_a)->data);
	printf("\n HEAD A NEXT [%p]", (*head_a)->next);
	printf("\n --------------- \n");
	printf("\n list a [%p]", llist_a);
	printf("\n list a data [%i]", (*llist_a)->data);
	printf("\n list a next [%p]", (*llist_a)->next);
	printf("\n --------------- \n");
	printf("\n HEAD B [%p]", head_b);
	printf("\n HEAD B DATA[%i]", (*head_b)->data);
	printf("\n HEAD B NEXT [%p]", (*head_b)->next);
	printf("\n HEAD B NEXT DATA [%i]", (*head_b)->next->data);
	printf("\n & HEAD B NEXT DATA [%p]", &(*head_b)->next->data);
	printf("\n --------------- \n");
	
}

void	TESTE_rotate_a(int argc, char **argv)
{
	t_node *listinha_a = arguments_to_list(argc, argv);
	//t_node *listinha_b = NULL; //not a list yet,
	//char *args_b[] = {"./program", "20", "40", "60", "80", "100"};
	char *args_b[] = {"./program", "20"};
	t_node *listinha_b = arguments_to_list(2, args_b);

	printf("LISTA A antes\n");
	DEBUG_printlist(listinha_a);
	printf("\n LISTA B antes \n");
	DEBUG_printlist(listinha_b);
	rotate_a(&listinha_a);
	printf("\n LISTA A depoix\n");
	DEBUG_printlist(listinha_a);
	printf("\n LISTA B depoix\n");
	DEBUG_printlist(listinha_b);
	printf("\n ---------------------------------- \n");

	}

/*void TESTE_all_moves(t_node **head_a, t_node **head_b)
{
	sa(head_a);
	DEBUG_printlist(head_a);

	pa(head_a, head_b);
	DEBUG_printlist(head_a);
	DEBUG_printlist(head_b);

	ra(head_a);
	DEBUG_printlist(head_a);

	rra(head_a);
	DEBUG_printlist(head_a);

	sb(head_b);
	DEBUG_printlist(head_b);

	pb(head_b, head_b);

	rb(head_b);
	DEBUG_printlist(head_b);

	rrb(head_b);
	DEBUG_printlist(head_b);

	ss(head_a, head_b);
	DEBUG_printlist(head_a);
	DEBUG_printlist(head_b);

	rr(head_a, head_b);
	DEBUG_printlist(head_a);
	DEBUG_printlist(head_b);

	rrr(head_a, head_b);
	DEBUG_printlist(head_a);
	DEBUG_printlist(head_b);
}
*/

//**HEAD com 2 asteriscos é o ponteiro para a lista
//*HEAD com 1 asteriscos é o ponteiro para o primeiro node da lista  