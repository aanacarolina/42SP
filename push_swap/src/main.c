/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 18:13:46 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TODO: norminette - mostly DONE
// TODO: refactor max functions - mostly DONE
// TODO: make it work outside args - no arguments to list

int	main(int argc, char **argv)
{
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
		char	*args_b[] = {"./program", "20", "40", "60", "80", "100"};
		printf("\n* stack a *\n");
		t_node *listinha_a = arguments_to_list(argc, argv);
		DEBUG_printlist(listinha_a);
		DEBUG_stack_size(&listinha_a);
		DEBUG_node_position(&listinha_a, 10);
		printf("\n* stack b *\n");
		t_node *listinha_b = arguments_to_list(6, args_b);
		DEBUG_printlist(listinha_b);
		DEBUG_stack_size(&listinha_b);
		DEBUG_node_position(&listinha_b, 60);
		
	}
	return (0);
}
