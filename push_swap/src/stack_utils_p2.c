/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 22:18:55 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Check if there are 3 elements
// returns: [0] false / [1] TRUE
int	size_3_checker(t_node **stack)
{
	int	size;

	size = stack_size(stack);
	if (size == 3)
		return (1);
	else
		return (0);
}

// if the stack size is three,you only need one operation to sort the stack.
// Except numbers are in descending sorted order (such as 3–2–1).
// In this case would require two operations
void	sort_three(t_node **llist_a)
{
	int	max_position;
	int	min_position;

	max_position = node_position(llist_a, max_num(llist_a));
	min_position = node_position(llist_a, min_num(llist_a));
	while (!is_sorted(llist_a))
	{
		if (min_position == 0)
		{
			sa(llist_a);
			ra(llist_a);
		}
		else if (max_position == 0)
		{
			ra(llist_a);
			if (!is_sorted(llist_a))
				sa(llist_a);
		}
		else if (min_position == 2)
			rra(llist_a);
		else
			sa(llist_a);
		break ;
	}
}
/*
OPTIONS
ok - 1, 2, 3 -> already sorted - break while
ok 3, 2, 1 -> max == 0 () -
OK 1, 3, 2->  min == 0 ()
ok 2, 3, 1 -> min == 2 ()

2, 1, 3 ->
SA
3, 1, 2 ->
RA





*/
// check already sorted
// if MIN position  == 2 && MAX position == 0
// RRA 2X
// else
// 1 move:
// 1.1 - MAX position == 2 ->
// 1.2 - MIN position == 0 ->
// find MAX number in stack

int	max_num(t_node **stack)
{
	t_node	*temp;
	int		max;

	temp = (*stack);
	max = (*stack)->data;
	{
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
				if (temp->data > max)
				{
					max = temp->data;
				}
			}
			return (max);
		}
	}
}

// find MIN number in stack
int	min_num(t_node **stack)
{
	t_node	*temp;
	int		min;

	temp = (*stack);
	min = (*stack)->data;
	{
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
				if (temp->data < min)
				{
					min = temp->data;
				}
			}
			return (min);
		}
	}
}
