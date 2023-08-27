/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/27 02:14:09 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;
	t_node	*temp_b;

	llist_a = head_a;
	llist_b = head_b;
	temp_b = (*llist_b);
	if (*llist_a != NULL)
	{
		if (*head_b == NULL)
		{
			(*llist_b) = (*llist_a);
			// they are pointers That's why it just points and not become the node
			(*llist_a) = (*llist_a)->next;
			(*llist_b)->next = NULL;
		}
		else
		{
			(*llist_b) = (*llist_a);
			// b agora aponta pro primeiro node de a
			(*llist_a) = (*llist_a)->next;
			// lista A agora aponta pro segundo node de a tipo a deleção desse node de A
			(*llist_b)->next = temp_b;
		}
	}
}

void	push_a(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;
	t_node	*temp_a;

	llist_a = head_a;
	llist_b = head_b;
	temp_a = (*llist_a);
	if (*llist_b != NULL)
	{
		if (*head_a == NULL)
		{
			(*llist_a) = (*llist_b);
			// they are pointers That's why it just points and not become the node
			(*llist_b) = (*llist_b)->next;
			(*llist_a)->next = NULL;
		}
		else
		{
			(*llist_a) = (*llist_b);
			// b agora aponta pro primeiro node de a
			(*llist_b) = (*llist_b)->next;
			// lista A agora aponta pro segundo node de a tipo a deleção desse node de A
			(*llist_a)->next = temp_a;
		}
	}
}

//**pa (push a): Take the first element at the top of b and put it at the top of a.**
void	pa(t_node **head_a, t_node **head_b)
{
	push_a(head_a, head_b);
	ft_putstr_fd("pa\n", 1);
}

//**pb (push b): Take the first element at the top of a and put it at the top of b.**
void	pb(t_node **head_a, t_node **head_b)
{
	push_b(head_a, head_b);
	ft_putstr_fd("pb\n", 1);
}
