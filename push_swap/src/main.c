/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/08 00:19:03 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TODO: norminette - mostly DONE
int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char **new_argv;

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
		if (argc == 2)
			new_argv = check_and_parse_argv(argv);
		stack_a = arguments_to_list(argc, argv);
		stack_b = NULL;
		// if(!dups_checker(&stack_a))
		push_swap(&stack_a, &stack_b);
	}
	return (0);
}
