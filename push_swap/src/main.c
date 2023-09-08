/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 22:49:50 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TODO: duplicate bug is back 🤡
// TODO: norminette - mostly DONE
// TODO: refactor max functions - mostly DONE
// TODO: make it work outside args - no arguments to list

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
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
		if (stack_size(&stack_a) == 2)
			size_2_checker(&stack_a);
		push_swap(&stack_a, &stack_b);
	}
	return (0);
}
