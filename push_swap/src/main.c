#include "../push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		*array_args;
	int		*sortedArr;
	int		size;
	t_node	*listinha_b;
	t_node	*listinha_a;

	if (argc < 2)
	{
		printf("🚪 EXIT at ARG < 2 \n"); // TODO remove at the end
		exit(1);
	}
	if (checker_wrapper(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		printf("🚪 EXIT at checker \n"); // TODO remove at the end
		exit(1);
	}
	/* else
	{
		i = 0;
		array_args = args_array(argc, argv);
		while (i < argc - 1)
		{
			printf("array of args[%d]: %d\n", i, array_args[i]);
			i++;
		}
		i = 0;
		// size = sizeof(argv) / sizeof(atoi(argv[0]));
		size = 5;
		sortedArr = bubbleSort(array_args, size);
		while (i < argc - 1)
		{
			printf("SORTED array of args[%d]: %d\n", i, sortedArr[i]);
			i++;
		}
		printf("5th %d \n", sortedArr[4]);
		// printf("last %d \n", sortedArr[10]);
		free(array_args);
	}*/
	else
	{
		char *arg_6[] = {"./program", "20", "40", "60", "80", "100"};
		char *arg_3[] = {"./program", "20", "40", "60"};
		char *arg_2[] = {"./program", "20", "40"};
		char *arg_1[] = {"./program", "20"};
		
		listinha_a = arguments_to_list(argc, argv);
		listinha_b = NULL; //not a list yet, just a normal var - simulate empty list 
		listinha_b = create_node(20, NULL);//simulate list of 1 node
		//listinha_b = arguments_to_list(2, arg_2);//simulate list of 2 nodes
		//listinha_b = arguments_to_list(3, arg_3); //simulate list of 3 nodes
		//listinha_b = arguments_to_list(6, arg_6); //simulate list of 6  nodes
		printf("[ANTES] -> LISTINHA A \n");
		DEBUG_printlist(listinha_a);
		printf("\n[ANTES] -> LISTINHA B\n");
		DEBUG_printlist(listinha_b);
		push_b(&listinha_a, &listinha_b);
		printf("\n\n[DEPOIS] - LISTINHA A\n");
		DEBUG_printlist(listinha_a);
		printf("\n[DEPOIS] - LISTINHA B\n");
		DEBUG_printlist(listinha_b);

	}
	/*
	TESTE_create_node(argc, argv);
	TESTE_arguments_to_list(argc, argv);
	TESTE_args_checker();
	TESTE_non_int_checker();
	TESTE_max_min_int_checker();
	*/
	return (0);
}
