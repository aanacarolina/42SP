/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheaper_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 18:00:32 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_a_smaller_min_b(t_node **head_a, t_node **head_b)
{
	int	min_a;
	int	min_b;

	min_a = min_num(head_a);
	min_b = min_num(head_b);
	if (min_a < min_b)
	{
		printf("\nmin_a [%d] < min_b [%d]\n", min_a, min_b);
		return (1);
	}
	else
		return (0);
}

int	max_a_bigger_max_b(t_node **head_a, t_node **head_b)
{
	int	max_a;
	int	max_b;

	max_a = max_num(head_a);
	max_b = max_num(head_b);
	if (max_a > max_b)
	{
		printf("\nmax_a [%d] > max_b [%d]\n", max_a, max_b);
		return (1);
	}
	else
		return (0);
}

// biggest of B on top

int	current_max_a(t_node **head_a, t_node **head_b)
{
	int	current_max_a;
	int	max_a;
	int	max_b;

	current_max_a = 3;
	max_a = max_num(head_a);
	max_b = max_num(head_b);
	printf("current max a");
	return (current_max_a);
}
// CHEAPEST
// 1 - Find MAX e MIN of B
// 1.1 - Loop over stack A to check IF there is a number either:
// 1.1.1 - smaller than min of B
// 1.1.2 - bigger than max of B

// If any TRUE, do:
// Place biggest of B on top (if not already)
// Then push "CURRENT A MAX" (not the biggest of A
// but the next bigger in relation to max of B)

// ELSE (means we can't send a number from A to top of B immediatelly,
// because it will mess with the circular order)
// 1 - CALCULATIONS to check qty of moves
// 1.2 - CURRENT_MAX_A
// 1.2.1 Loop over stack A to find the next number to send
// by making this caclulation:
// 1.2.2 - When current_a-- == MAX B --> return