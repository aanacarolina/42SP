/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 17:04:05 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//TODO: duplicate bug is back 🤡
//TODO: norminette - mostly DONE
//TODO: refactor max functions - mostly DONE
//TODO: make it work outside args - no arguments to list

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
		t_node *listinha_a = arguments_to_list(argc, argv);
		char	*args_b[] = {"./program", "20", "40", "60", "80", "100"};
		t_node *listinha_b = arguments_to_list(6, args_b);
		
		printf("\n* ANTES stack a *\n");
		DEBUG_printlist(listinha_a);
		printf("\n* ANTES stack b *\n");
		DEBUG_printlist(listinha_b);

		push_swap(&listinha_a, &listinha_b);

		printf("\n* DEPOIS stack a *\n");
		DEBUG_printlist(listinha_a);
		printf("\n* DEPOIS stack b *\n");
		DEBUG_printlist(listinha_b);

	}
	return (0);
}
