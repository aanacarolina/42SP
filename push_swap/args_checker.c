/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:56:35 by anacaro3          #+#    #+#             */
/*   Updated: 2023/07/23 18:35:52 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../push_swap.h"
#include <stdio.h>

int	isDuplicate(char *args[], int argCount, char *newArg)
{
	int	i;

	i = 0;
	while (i < argCount)
	{
		if (ft_strncmp(args[i], newArg, ft_strlen(args[i])) == 0)
		{
			return (1); // Duplicate found
		}
		i++;
	}
	return (0); // No duplicate found
}

int	args_checker(int argc, char **argv)
{
	int		argCount;
	int		i;
	char	*arg;
	char	*arguments[argc - 1];

	argCount = 0;
	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		if (isDuplicate(arguments, argCount, arg))
		{
			ft_putstr_fd("👯 Duplicate argument found!\n", 2);
			return (1);
		}
		arguments[argCount++] = arg;
		i++;
	}
	ft_putstr_fd("No duplicate arguments found.\n", 2); // TODO: remove or commment before handing in
	return (0);
}
