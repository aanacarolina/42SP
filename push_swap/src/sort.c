/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 13:32:58 by anacaro3         ###   ########.fr       */
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
int	is_sorted(t_node **head)
{
	t_node	*llist;

	llist = *head;
	while (llist != NULL)
	{
		if (llist->data > llist->next->data)
			return (0);
		llist = llist->next;
	}
	return (1);
}

void	sort_two(t_node **stack)
{
	int	size;

	size = stack_size(stack);
	if (size == 2 && is_sorted(stack))
		exit_free(stack);
	else
	{
		sa(stack);
		exit_free(stack);
	}
}

// if the stack size is 3,you only need make max 2 ops
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

void	sort_four_and_five(t_node **llist_a, t_node **llist_b)
{
	int	i;
	int	size;

	if (is_sorted(llist_a))
		return ;
	i = 0;
	size = stack_size(llist_a);
	while (i < size)
	{
		if ((*llist_a)->index <= 1)
			pb(llist_a, llist_b);
		else
			ra(llist_a);
		i++;
	}
	if (size == 4)
		sort_two(llist_a);
	else
		sort_three(llist_a);
	if ((*llist_b)->index < (*llist_b)->next->index)
		sb(llist_b);
	while (*llist_b)
		pa(llist_b, llist_a);
}
