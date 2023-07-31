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

#include "../push_swap.h"
#include <stdio.h>

int isDuplicate(char *args[], int argCount, char *newArg)
{
	int i;

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

int dups_checker(int argc, char **argv)
{
	int argCount;
	int i;
	char *arg;
	char *arguments[argc - 1];

	argCount = 0;
	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		if (isDuplicate(arguments, argCount, arg))
		{
			// ft_putstr_fd("👯 Duplicate argument found!\n", 2);
			ft_putstr_fd("Error \n", 2);
			return (1);
		}
		arguments[argCount++] = arg;
		i++;
	}
	ft_putstr_fd("No duplicate arguments found.\n", 2); // TODO: remove or commment before handing in
	return (0);
}

// checks if is nothing other than INT - returns 0 in case of error or 1 if everything is fine
int non_int_checker(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 1)
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

// checks if numbers are between MAX AND MIN (range)
int max_min_int_checker(int argc, char **argv)
{
	int i;
	long current;

	i = 1;
	while (i < argc)
	{
		// argv[i] -> atol
		current = ft_atol(argv[i]); // salvar resultado de atol numa var long
		// verificar se < int-min || > int-max
		if (current < INT_MIN || current > INT_MAX)
			return (0); // se for fora do range acaba return (0)
		else
			i++;		// se nao segue o baile
	}
	return (1); // e no final return (1)
}
