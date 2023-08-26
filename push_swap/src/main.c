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
	if (argc == 2){
		ft_putstr_fd("List of ONE is already sorted\n", 1);
		printf("🚪 EXIT at only one arg \n"); // TODO remove at the end
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

	//make it work outside args - no arguments to list

	t_node *listinha_a = arguments_to_list(argc, argv);
	//t_node *listinha_b = NULL; //not a list yet,
	char *args_b[] = {"./program", "20", "40", "60", };
	t_node *listinha_b = arguments_to_list(4, args_b);
	
	printf("LISTA A antes\n");
	DEBUG_printlist(listinha_a);
	printf("\n LISTA B antes \n");
	DEBUG_printlist(listinha_b);
	ra(&listinha_a, &listinha_b);
	rb(&listinha_a, &listinha_b);
	printf("\n LISTA A depoix\n");
	DEBUG_printlist(listinha_a);
	printf("\n LISTA B depoix\n");
	DEBUG_printlist(listinha_b);
	printf("\n ---------------------------------- \n");

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
