/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheaper_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 15:56:31 by anacaro3         ###   ########.fr       */
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
		while (--data != (min_num(head_b))) // dec DATA until equals to B MIN
		{
			if (node_position(head_b, data) != -1) // if that DATA can't be found 
				return (node_position(head_b, data));
			// returns position of the number in B that is equal to value of data 
		}
	}
	return (42); 
}
