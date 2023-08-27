/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/27 04:10:51 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//**sa (swap a): Swap the first 2 elements at the top of stack a.**
void	swap_aux(t_node **head)
{
	t_node	**llist;
	t_node	*temp;
	t_node	*temp2;

	if (head == NULL && (*head)->next == NULL)
	{
		// TODO: temp = calloc(1, sizeof(t_node));
		llist = head;
		temp2 = (*llist)->next->next;
		temp = (*llist)->next;
		temp->next = (*llist);
		temp->next->next = temp2;
		(*head) = temp;
	}
}

void	sa(t_node **head_a)
{
	swap_aux(head_a);
	ft_putstr_fd("sa\n", 1);
}

//**sb (swap b): Swap the first 2 elements at the top of stack b.**
void	sb(t_node **head_b)
{
	swap_aux(head_b);
	ft_putstr_fd("sb\n", 1);
}

//**ss : sa and sb at the same time.**
void	ss(t_node **head_a, t_node **head_b)
{
	swap_aux(head_a);
	swap_aux(head_b);
	ft_putstr_fd("ss\n", 1);
}
