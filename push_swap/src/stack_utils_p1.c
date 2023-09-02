/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 17:23:35 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// checks the number of elements in a given stack
int	stack_size(t_node **stack)
{
	int		i;
	t_node	*temp;

	i = 1;
	temp = (*stack);
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

// node_index

// find last
