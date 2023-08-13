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
		t_node *listinha_a = arguments_to_list(argc, argv);
		listinha_b = create_node(0, NULL);;
		//DEBUG_printlist(listinha_a);
		//DEBUG_printlist(listinha_b);
		//printf("%d %d ANTES \n", listinha_a->data, listinha_a->next->data);
		sa(&listinha_a);
		sb(&listinha_b);
		ss(&listinha_a, &listinha_b);
		printf("DEPOIX \n");
		//DEBUG_printlist(listinha_a);
		//DEBUG_printlist(listinha_b);
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
