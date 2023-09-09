/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 15:34:13 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks the number of elements in a given stack
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

// Finds the position (index) of a given node in a stack
//(node is int because == node->data)
int	node_position(t_node **stack, int node)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = (*stack);
	while (temp != NULL)
	{
		if (temp->data == node)
			return (i);
		else
		{
			temp = temp->next;
			i++;
		}
	}
	return (-1);
}

// finds last node
int	last_node(t_node **stack)
{
	t_node	*temp;

	temp = (*stack);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp->data);
}
