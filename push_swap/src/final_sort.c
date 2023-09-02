/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 20:14:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// FINAL SORT
// Find MIN_A and get its index
// Calculate CEIL(stack_size / 2 )
// if result > node_index (means it's on top half) -
// RRA until MIN_A on top
// else RA until MIN_A on top

void	final_sort_a(t_node **head_a)
{
	t_node	**llist_a;
	int		min;
	int		size;
	int		position;
	int		list_middle;

	llist_a = head_a;
	min = min_num(llist_a);
	size = stack_size(llist_a);
	position = node_position(llist_a, min);
	list_middle = ft_ceil(size, 2);
	if (position != 0) // Checks if, by any chance,the MIN value is already at the top, indicating that the list is sorted.
	{
		if (list_middle >= position)
		{
			printf("Tô na metade de CIMA,manda RA\n MENOR [%d] POSIÇÃO [%d] METADE [%d]\n",
				min, position, list_middle);
		}
		else
		{
			printf("Tô na metade de BAIXO,manda RRA\n MENOR [%d] POSIÇÃO [%d] METADE [%d]\n",
				min, position, list_middle);
		}
	}
	else
		printf("already the first\n");
}