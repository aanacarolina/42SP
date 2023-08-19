/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/19 17:55:47 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//**sa (swap a): Swap the first 2 elements at the top of stack a.**
//>Do nothing if there is only one or no elements.**

void	swap_aux(t_node **head)
{
	t_node	**llist;
	t_node	*temp;
	t_node	*temp2;

	if (head == NULL || (*head)->next == NULL)
		head;
	else
	{
		// temp = calloc(1, sizeof(t_node));
		llist = head;
		temp2 = (*llist)->next->next; // salvando o next do terceiro
		temp = (*llist)->next;        // assign 2nd to 1st
		temp->next = (*llist);        // assign 1st to 2nd
		temp->next->next = temp2;
		// keeps the ref of a 3rd if exists or sets null if it doesn't exist
		(*head) = temp;
	}
}

void	sa(t_node **head_a)
{
	swap_aux(head_a);
	ft_putstr_fd("sa\n", 1);
}

//**sb (swap b): Swap the first 2 elements at the top of stack b.**
//> Do nothing if there is only one or no elements.

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
//**pa (push a): Take the first element at the top of b and put it at the top of a.**
// Do nothing if b is empty.

/* **pb (push b): Take the first element at the top of a and put it at the top of b.**
>Do nothing if a is empty.
1st time ou se b vazio: creates a node on b
head of B not null anymore, points to the current head of list A
	- and next becomes null
if second time: points to the node already there
2nd node of list A becomes first node = head a->next = next->next do 1st node

NOT 1ST TIME
save reference to 2 node of b to a temp
assign head to first node of a
make 2nd node of a become de first
 CHECK temp era null
 if so  = make first node->next  point to next of temp
 else = make first node->next = NULL

*/

void	push_b(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;
	t_node	*temp_b;

	llist_a = head_a;
	if (*llist_a != NULL)
	{
		llist_b = head_b;
		if (*head_b == NULL)
		{
			(*llist_b) = (*llist_a);
			// they are pointers that's why it just points and not become the node
			(*llist_a) = (*llist_a)->next;
			(*llist_b)->next = NULL;
		}
		else
		{
			temp_b = (*llist_b)->next;
			(*llist_b) = (*llist_a);
			// b agora aponta pro primeiro node de a
			(*llist_a) = (*llist_a)->next;
			// lista A agora aponta pro segundo node de a tipo a deleção desse node de A
			if (temp_b != NULL)
			// se lista B tiver mais que 2 elementos
			{
				(*llist_b)->next = temp_b->next;
			}
		}
	}
}

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
