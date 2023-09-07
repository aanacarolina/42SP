/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 18:18:45 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TODO: duplicate bug is back 🤡
// TODO: norminette - mostly DONE
// TODO: refactor max functions - mostly DONE
// TODO: make it work outside args - no arguments to list

int	main(int argc, char **argv)
{
		t_node *stack_a;
		t_node *stack_b;

	if (argc < 2)
	{
		ft_putstr("Error\n");
		exit(1);
	}
	if (argc == 2)
	{
		ft_putstr("Error\n");
		exit(1);
	}
	if (checker_wrapper(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		exit(1);
	}
	else
	{
		stack_a = arguments_to_list(argc, argv);
		stack_b = NULL;
		printf("\n* ANTES stack a *\n");
		DEBUG_printlist(stack_a);
		printf("\n* ANTES stack b *\n");
		DEBUG_printlist(stack_b);
		push_swap(&stack_a, &stack_b);
		current_max_a(&stack_a, &stack_b);
		printf("\n* DEPOIS stack a *\n");
		DEBUG_printlist(stack_a);
		printf("\n* DEPOIS stack b *\n");
		DEBUG_printlist(stack_b);
	}
	return (0);
}
