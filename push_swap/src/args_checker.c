/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:56:35 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/27 03:38:38 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

// checks if arg is nothing other than INT
// returns 0 in case of error or 1 if everything is fine
int	non_int_checker(int argc, char **argv)
{
	int	i;
	int	j;

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
int	max_min_int_checker(int argc, char **argv)
{
	int		i;
	long	current;

	i = 1;
	while (i < argc)
	{
		current = ft_atol(argv[i]);
		if (current < INT_MIN || current > INT_MAX)
			return (0);
		else
			i++;
	}
	return (1);
}

int	is_duplicate(char *args[], int arg_count, char *newArg)
{
	int	i;

	i = 0;
	while (i < arg_count)
	{
		if (ft_strncmp(args[i], newArg, ft_strlen(newArg)) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// checks for unique args
// returns 0 in case of error or 1 if everything is fine
int	dups_checker(int argc, char **argv)
{
	int		arg_count;
	int		i;
	char	*arg;
	char	*arguments[argc - 1]; //TODO - refactor

	arg_count = 0;
	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		if (is_duplicate(arguments, arg_count, arg))
			return (0);
		arguments[arg_count++] = arg;
		i++;
	}
	return (1);
}

// if any checker function returns 0 means some arg is invalid;
int	checker_wrapper(int argc, char **argv)
{
	int	dups;
	int	non_int;
	int	max_min;

	dups = dups_checker(argc, argv);
	non_int = non_int_checker(argc, argv);
	max_min = max_min_int_checker(argc, argv);
	if (dups == 1 && non_int == 1 && max_min == 1)
		return (1);
	else
		return (0);
}
