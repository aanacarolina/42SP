/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 17:18:16 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// FINAL SORT
// Find MIN_A 
// Put on MIN_A on top
// send all from B to A (until B null)
// free B
// free A
// exit 

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


