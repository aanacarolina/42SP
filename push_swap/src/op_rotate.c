/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/27 02:18:03 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;
	t_node	*initial_head;
	t_node	*temp;

	llist_a = head_a;
	llist_b = head_b;
	if (llist_a != NULL && (*llist_a)->next != NULL)
	{
		initial_head = (*llist_a);
		(*llist_a) = (*llist_a)->next;
		temp = (*llist_a);
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = initial_head;
		initial_head->next = NULL;
	}
}

void	rotate_b(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;
	t_node	*initial_head;
	t_node	*temp;

	llist_a = head_a;
	llist_b = head_b;
	if (llist_b != NULL && (*llist_b)->next != NULL)
	{
		initial_head = (*llist_b);
		(*llist_b) = (*llist_b)->next;
		temp = (*llist_b);
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = initial_head;
		initial_head->next = NULL;
	}
}

//**ra (rotate a): Shift up all elements of stack a by 1.**
void	ra(t_node **head_a, t_node **head_b)
{
	rotate_a(head_a, head_b);
	ft_putstr_fd("ra\n", 1);
}

//**rb (rotate b): Shift up all elements of stack b by 1.**
void	rb(t_node **head_a, t_node **head_b)
{
	rotate_b(head_a, head_b);
	ft_putstr_fd("rb\n", 1);
}

//**rr : ra and rb at the same time.**
void	rr(t_node **head_a, t_node **head_b)
{
	rotate_a(head_a, head_b);
	rotate_b(head_a, head_b);
	ft_putstr_fd("rr\n", 1);
}
