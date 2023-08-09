/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:53:09 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/05 19:54:29 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int *args_array(int argc, char **argv)
{
	int i;
	int j;
	int *arr_args;

	arr_args = calloc(argc, argc * sizeof(int));
	i = 1;
	j = 0;
	while (i < argc)
	{
		arr_args[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}

	return (arr_args);
}
