/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 21:08:04 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	position_min_b(int data, t_node **head_b)
{
	if (data > (max_num(head_b)) || data < (min_num(head_b)))
		// if data is either bigger than max or smaller than min
		return (node_position(head_b, (min_num(head_b))));
	// returns position of the B MIN
	else
	{
		if (--data != (min_num(head_b))) // dec DATA until equals to B MIN
		{
			if (node_position(head_b, data) != -1)
				// if that DATA can't be found
				return (node_position(head_b, data));
			// returns position of the number in B that is equal to value of data
		}
	}
	return (42);
}

// function to loop over A and return position where it will fit
// where to fit: first is bigger and second is smaller
// de cima (HEAD) é maior e de baixo (TEMP)é menor
// se nao cair nisso, inc position
//
int	position_in_b(int data, t_node **head_b)
{
	t_node	*current;
	t_node	*next;
	int		position;

	current = (*head_b);
	next = (*head_b)->next;
	position = 1;
	while (next)
	{
		if (data > current->data || data < next->data)
		{
			position++;
		}
		current = current->next;
		next = next->next;
	}
	return (position);
}
// function to loop over A and return the current min data
// if first is equal
// if other is equal
// if end of list and none equal return min_a
/*int	current_min_a(t_node **head_a, t_node **head_b)
{
	t_node	*temp;
	int		list_middle;
	int		moves;

	if (*head_a == NULL)
		return (INT_MIN);
	temp = *head_a;
	if (--temp->data == min_num(head_b))
	{
		return (temp->data);
	}
	else
	{
		temp = (*head_a)->next;
		while (temp != NULL && --temp->data != min_num(head_b))
		{
			temp = temp->next;
		}
		if (temp != NULL)
		{
			return (temp->data);
		}
		else
		{
			return (min_num(head_a));
		}
	}
}*/
// calculate qty of movements to send a number to the top
// based on position and stack size
int	moves_to_top_a(t_node **head, int initial_position, int data)
{
	int	list_middle;
	int	moves;
	
	list_middle = ft_ceil(stack_size(head), 2);
	moves = 0;
	if (!is_sorted(head))
	{
		if (list_middle >= initial_position)
		// Means it is on upper half of list. Calculates how many ROTATES will be made until on TOP
		{
			while (node_position(head, data) != 0)
			{
				ra(head);
				moves++;
			}
			return (moves);
		}
		else
		// Means it is on lower half of list. Calculates how many REV ROTATES will be made until on TOP
		{
			while (node_position(head, data) != 0)
			{
				rra(head);
				moves++;
			}
			return (moves);
		}
	}
	return (moves);
}

int	moves_to_top_b(t_node **head, int initial_position, int data)
{
	int	list_middle;
	int	moves;

	list_middle = ft_ceil(stack_size(head), 2);
	moves = 0;
	if (!is_sorted(head))
	{
		if (list_middle >= initial_position)
		// Means it is on upper half of list. Calculates how many ROTATES will be made until on TOP
		{
			while (node_position(head, data) != 0)
			{
				rb(head);
				moves++;
			}
			return (moves);
		}
		else
		// Means it is on lower half of list. Calculates how many REV ROTATES will be made until on TOP
		{
			while (node_position(head, data) != 0)
			{
				rrb(head);
				moves++;
			}
			return (moves);
		}
	}
	return (moves);
}
