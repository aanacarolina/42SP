/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:53:09 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 23:59:17 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *args_array(int argc, char **argv)
{
	int i;
	int j;
	int *arr_args;

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

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int *bubble_sort(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		int j = 0;
		printf("size - %i\n", size);
		printf("arr[i] > %d\n", arr[i]);
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
			j++;
		}
		i++;
	}
	return arr;
}

int dups_checker_array(int argc, char **argv)
{
	int i;
	int *arr;
	int *sorted_array;


	i = 0;
 	arr = args_array(argc, argv);
	sorted_array = bubble_sort(arr, (argc - 1));
	while (i < argc - 2)
	{
		if (sorted_array[i] != sorted_array[i + 1])
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
