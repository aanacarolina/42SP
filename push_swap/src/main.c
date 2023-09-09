/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 17:36:06 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// prints a linked list with its nodes
void	DEBUG_printlist(t_node *head)
{
	t_node	*temp;
	int		i;

	i = 0;
	if (head == NULL)
	{
		printf("this list is NULL");
		return ;
	}
	temp = head;
	printf("node [%i]: data: [%i] next: [%p] \n", i, temp->data, temp->next);
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

// TODO: norminette - mostly DONE
int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	// char **new_argv;
	// TODO: f
	if (argc < 2)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	if (checker_wrapper(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	else
	{
		/*if (dups_checker_array(argc, argv) == 1)
			ft_putstr_fd("Error\n", 2);
		else
			ft_putstr_fd("Error\n", 2);
			// if (argc == 2)
		//	new_argv = check_and_parse_argv(argv);*/
		stack_a = arguments_to_list(argc, argv);
		stack_b = NULL;
		// if(!dups_checker(&stack_a))
		// prints a linked list with its nodes
		DEBUG_printlist(stack_a);
		moves_to_top_a(&stack_a, 6 , 20); //400 99 44 7 80 3 20 5 1
		//moves_to_top(&stack_a, 2 , 20); //400 99 20 44 7 80 3 5 1
		//moves_to_top(&stack_a, 2 , 20); //400 99 20 7 80 
		DEBUG_printlist(stack_a);

		// push_swap(&stack_a, &stack_b);
	}
	return (0);
}
