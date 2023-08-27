/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/27 04:45:04 by anacaro3         ###   ########.fr       */
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
		DEBUG_printlist(arguments_to_list(argc, argv));
		printf("\n* stack b *\n");
		DEBUG_printlist(arguments_to_list(6, args_b));
	}
	return (0);
}
