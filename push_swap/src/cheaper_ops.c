/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheaper_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/03 18:19:28 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"





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
//because it will mess with the circular order)
// 1 - CALCULATIONS to check qty of moves
// 1.2 - CURRENT_MAX_A
// 1.2.1 - Loop over stack A to find the next number to send by making this caclulation:
// 1.2.2 - When current_a-- == MAX B --> return