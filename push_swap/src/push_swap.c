/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:02:36 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 19:15:47 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push_swap(void)
{
	printf("TODO");
	return (0);
}

// GENERAL LOGIC
// 1 - Check if there are 3 elements in A (also condition to stop executing turk)
// 1.1 - if TRUE:
// 1.1.1 - do not push anything to B
// 1.1.2 - call SORT_3 logic in A
// 1.1.3 - end the program
// 2 - ELSE - push first 2 itens of A to B (PB 2x)
// execute Mechanical Turk Algorithm
// until 3 elements left in A
// call SORT_3 logic in A 
// Push B to A until B empty
// Make FINAL ARRANGEMENT in A


// TODOs:
// create SORT_3 logic
// create CHEAPER ops (many)
// create GCD (Greatest Common Divisor == Máximo Divisor Comum - MDC).
// create A smaller than min of B
// create A bigger than max of B
// create biggest_b_on_top
// create current_max_a


// Mechanical Turk Algorithm
// Our aim is to move itens from A to B, in a way that B will always be "circularly ordered".
// This is achieved by using the CHEAPEST movement calculations

 

//CHEAPEST
// 1 - Find MAX e MIN of B
// 1.1 - Loop over stack A to check IF there is a number either:
// 1.1.1 - smaller than min of B
// 1.1.2 - bigger than max of B

// If any TRUE, do:
// Place biggest of B on top
// Then push "CURRENT A MAX" (not the biggest of A
// but the next bigger in relation to max of B)

//ELSE (means we can't send A to top of B immediatelly, because it will mess with the circular order)
// Place MAX of B on top
// Find CURRENT_MAX_A 
// Move it to the top of A
// Push it to top of B

// 2 - CURRENT_MAX_A
// Loop over stack A to find the next number to send by making this caclulation:
// 2.1 When current_a-- == MAX B --> return


//FINAL SORT
//Find MIN_A and get its index
//Calculate CEIL(stack_size / 2 ) 
//if result > node_index (means it's on top half) - 
//RRA until MIN_A on top 
//else RA until MIN_A on top