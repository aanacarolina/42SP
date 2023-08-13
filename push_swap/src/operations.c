/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/13 17:43:37 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//**sa (swap a): Swap the first 2 elements at the top of stack a.**
//>Do nothing if there is only one or no elements.**
void	sa(t_node **head_a)
{
	t_node	**llist;
	t_node	*temp;
	t_node	*temp2;

	if (head_a == NULL || (*head_a)->next == NULL)
		head_a;
	else
	{
		// temp = calloc(1, sizeof(t_node));
		llist = head_a;
		temp2 = (*llist)->next->next; // salvando o next do terceiro
		temp = (*llist)->next;        // 50
		temp->next = (*llist);        // 30
		temp->next->next = temp2;     // mas se nao aponta pro endereço do 3o
		(*head_a) = temp;
		ft_putstr_fd("sa\n", 1);
	}
}

//**sb (swap b): Swap the first 2 elements at the top of stack b.**
//> Do nothing if there is only one or no elements.

void	sb(t_node **head_b)
{
	t_node	**llist;
	t_node	*temp;
	t_node	*temp2;

	if (head_b == NULL || (*head_b)->next == NULL)
		head_b;
	else
	{
		// temp = calloc(1, sizeof(t_node));
		llist = head_b;
		temp2 = (*llist)->next->next; // salvando o next do terceiro
		temp = (*llist)->next;        // 50
		temp->next = (*llist);        // 30
		temp->next->next = temp2;     // mas se nao aponta pro endereço do 3o
		(*head_b) = temp;
		ft_putstr_fd("sb\n", 1);
	}
}

//**ss : sa and sb at the same time.**
void	ss(t_node **head_a, t_node **head_b)
{
	sa(head_a);
	sb(head_b);
	ft_putstr_fd("ss\n", 1);
}
//**pa (push a): Take the first element at the top of b and put it at the top of a.**
// Do nothing if b is empty.
/*void	pa(t_node **head_a, t_node **head_b)
{
	if (head_b != NULL)
}

/* **pb (push b): Take the first element at the top of a and put it at the top of b.**
>Do nothing if a is empty.
1st time: creates a node on b
head of B not null anymore, points to the current head of list A
	- and next becomes null
if second time: points to the node already there
2nd node of list A becomes first node
*/

//**ra (rotate a): Shift up all elements of stack a by 1.**
//>The first element becomes the last one.

//**rb (rotate b): Shift up all elements of stack b by 1.**
//>The first element becomes the last one.

//**rr : ra and rb at the same time.**

//**rra (reverse rotate a): Shift down all elements of stack a by 1.**
//>The last element becomes the first one.

//**rrb (reverse rotate b): Shift down all elements of stack b by 1.**
//>The last element becomes the first one.

//**rrr : rra and rrb at the same time.**
