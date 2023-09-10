/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina.silva <carolina.silva@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 11:37:10 by carolina.si      ###   ########.fr       */
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
		stack_a = arguments_to_list(argc, argv);
		get_index(stack_a);
		stack_b = NULL;
		push_swap(&stack_a, &stack_b);
	}
	return (0);
}
