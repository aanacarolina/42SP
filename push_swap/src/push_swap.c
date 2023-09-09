/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:02:36 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 14:20:03 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;

	llist_a = head_a;
	llist_b = head_b;
	if (is_sorted(llist_a) == 1)
	//TODO exit and free
		exit(1);
	if (stack_size(llist_a) == 2)
		size_2_checker(llist_a);
	if (size_3_checker(llist_a) == 1 && is_sorted(llist_a) != 1)
	{
		sort_three(llist_a);
		exit(1);
	}
	else
	{
		pb(llist_a, llist_b);
		pb(llist_a, llist_b);
		final_sort_a(llist_a);
		/*if (min_a_smaller_min_b(llist_a, llist_b) == 1
			|| max_a_bigger_max_b(llist_a, llist_b) == 1)
		{
		//printf("\nHora de chamar biggest_b_on_top\n");
		}*/
	}
}