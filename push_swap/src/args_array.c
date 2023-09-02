/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:53:09 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 16:44:03 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*args_array(int argc, char **argv)
{
	int	i;
	int	j;
	int	*arr_args;

	arr_args = calloc(argc - 1, sizeof(int));
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
