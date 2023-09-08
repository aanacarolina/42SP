/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:02:36 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 20:44:41 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;

	llist_a = head_a;
	llist_b = head_b;
	if (size_3_checker(llist_a) == 1 && is_sorted(llist_a) != 1)
	{
		sort_three(llist_a);
		exit(1);
		// free(llist_a);
	}
	else
	{
		pb(llist_a, llist_b);
		pb(llist_a, llist_b);
		
		if (min_a_smaller_min_b(llist_a, llist_b) == 1 || max_a_bigger_max_b(llist_a, llist_b) == 1)
		{
		printf("\nHora de chamar biggest_b_on_top\n");
		}
	}
}

// GENERAL LOGIC
// 1- Check if there are 3 elements in A
//(also condition to stop checking cheapest turk)
// 1.1 - if TRUE:
// 1.1.1 - do not push anything to B
// 1.1.2 - call SORT_3 logic in A
// 1.1.3 - end the program

// 2 - ELSE -
// create stack B
// push first 2 itens of A to B (PB 2x)
// execute Mechanical Turk Algorithm
// until 3 elements left in A
// 3 - call SORT_3 logic in A
// 4 - Push B to A until B empty
// 5 - Make FINAL ARRANGEMENT in A

// TODOs:
// create CHEAPER ops (many)
// create A smaller than min of B
// create A bigger than max of B
// create biggest_b_on_top
// create current_max_a
// create already sorted

// Mechanical Turk Algorithm
// Our aim is to move itens from A to B,
// in a way that B will always be "circularly ordered".
// This is achieved by using the CHEAPEST movement calculations

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
// 1.2.1 - Loop over stack A to find the next number to send
// by making this caclulation:
// 1.2.2 - When current_a-- == MAX B --> return

// FINAL SORT
// Find MIN_A and get its index
// Calculate CEIL(stack_size / 2 )
// if result > node_index (means it's on top half) -
// RRA until MIN_A on top
// else RA until MIN_A on top