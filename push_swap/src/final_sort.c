/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 22:26:09 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// FINAL SORT
// Find MIN_A and get its index
// Calculate CEIL(stack_size / 2 )
// if result > node_index (means it's on top half) -
// RRA until MIN_A on top
// else RA until MIN_A on top

// Checks if the stack is sorted.
// returns: [0] FALSE / [1] TRUE
int	is_sorted(t_node **head_a)
{
	t_node	*llist_a;
	int		i;

	llist_a = *head_a;
	i = INT_MIN;
	while (llist_a != NULL)
	{
		if (llist_a->data < i)
		{
			return (0);
		}
		else
		{
			i = llist_a->data;
			llist_a = llist_a->next;
		}
	}
	return (1);
}

void	final_sort_a(t_node **head_a)
{
	int		min;
	int		position;
	int		list_middle;

	min = min_num(head_a);
	position = node_position(head_a, min);
	list_middle = ft_ceil(stack_size(head_a), 2);
	if (!is_sorted(head_a))
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
