/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 19:31:35 by anacaro3         ###   ########.fr       */
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
		final_sort_a(&listinha_a);
		printf("\n* stack b *\n");
		t_node *listinha_b = arguments_to_list(6, args_b);
		DEBUG_printlist(listinha_b);
		final_sort_a(&listinha_b);
	}
	return (0);
}
