/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 21:13:55 by anacaro3         ###   ########.fr       */
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
/* void	sort_three(t_node **stack)
{

	//check already sorted
	//if MIN position  == 0 && MAX position == 2 
	//RRA 2X
	//else
	//1 move:
	//1.1 - MAX position == 2 -> 
	//1.2 - MIN position == 0 -> 

}*/

/*
OPTIONS
1, 2, 3 -> already sorted - do nothing
3, 2, 1 -> if ()
3, 1, 2 -> else ()
1, 3, 2 -> else ()
2, 3, 1 -> else ()
2, 1, 3 -> else ()
*/


// find MAX number in stack
int	max_num(t_node **stack)
{
	t_node	*temp;
	int		max;

	temp = (*stack);
	max = (*stack)->data; // first element of stack just to have a comparative
	{
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
				if (temp->data > max)
				{
					max = temp->data; //
										// saves the current/new MAX each times it satifies the condition
				}
			}
			return (max);
		}
	}
}

// find MIN number in stack
int	min_num(t_node **stack)
{
	t_node *temp;
	int min;

	temp = (*stack);
	min = (*stack)->data; // first element of stack just to have a comparative
	{
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
				if (temp->data < min)
				{
					min = temp->data;
					// saves the current/new min each times it satifies the condition
				}
			}
			return (min);
		}
	}
}