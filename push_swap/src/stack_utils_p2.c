/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 18:37:55 by anacaro3         ###   ########.fr       */
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

// find node in stack

// find max in stack

// find min in stack