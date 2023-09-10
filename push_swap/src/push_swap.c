/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina.silva <carolina.silva@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:02:36 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 11:12:13 by carolina.si      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_node **head_a, t_node **head_b)
{
	t_node **llist_a;
	t_node **llist_b;

	llist_a = head_a;
	llist_b = head_b;
	if (is_sorted(llist_a) == 1)
		exit_free(llist_a); //OU HEAD?  
	if (stack_size(llist_a) == 2)
		sort_two(llist_a);
	if (size_3_checker(llist_a) == 1 && is_sorted(llist_a) != 1)
	{
		sort_three(llist_a);
		exit_free(llist_a); //OU HEAD?
	}
	else
	{
		pb(llist_a, llist_b);
		pb(llist_a, llist_b);
		//operations
	}
}