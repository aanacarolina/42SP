/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/03 18:06:20 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//TODO: duplicate bug is back 🤡
//TODO: norminette - mostly DONE
//TODO: refactor max functions - mostly DONE
//TODO: make it work outside args - no arguments to list
//TODO: check if ARGS are inputed already sorted (if TRUE exit)

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
		printf("\n* stack a *\n");
		t_node *listinha_a = arguments_to_list(argc, argv);
		DEBUG_printlist(listinha_a);
		int sorted_a = is_sorted(&listinha_a);
		if (sorted_a == 1)
		{
			ft_putstr("Stack A is already sorted\n");
			exit(1);
		}
		printf("\n* stack b *\n");
		char	*args_b[] = {"./program", "20", "40", "60", "80", "100"};
		t_node *listinha_b = arguments_to_list(6, args_b);
		DEBUG_printlist(listinha_b);
		int sorted_b = is_sorted(&listinha_b);
		if (sorted_b == 1)
		{
			ft_putstr("Stack B is already sorted\n");
			exit(1);
		}
	}
	return (0);
}
