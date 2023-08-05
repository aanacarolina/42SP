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

#include <stdio.h>

int	*args_array(int argc, char **argv)
{
	int i;
	int arr_size;
	int arr_args[arr_size];

	i = 1;
	arr_size = argc;

	
	while (i < argc)
	{
		arr_args[i] = argv[i];
		i++; 
	}
	
	printf(arr_args);
}