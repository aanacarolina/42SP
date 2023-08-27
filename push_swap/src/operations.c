/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/26 21:28:44 by anacaro3         ###   ########.fr       */
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
		initial_head = (*llist_a); // saving address of the original first node
		(*llist_a) = (*llist_a)->next; // setting head to 2 node
		temp = (*llist_a);
		while (temp->next != NULL) // looking for current last node
		{
			temp = temp->next;
		}
		temp->next = initial_head; // making current last node point to original first node
		initial_head->next = NULL; // setting first node as last
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
		initial_head = (*llist_b); // saving address of the original first node
		(*llist_b) = (*llist_b)->next; // setting head to 2 node
		temp = (*llist_b);
		while (temp->next != NULL) // looking for current last node
		{
			temp = temp->next;
		}
		temp->next = initial_head; // making current last node point to original first node
		initial_head->next = NULL; // setting first node as last
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

void	rev_rotate_a(t_node **head_a, t_node **head_b)
{
	t_node	**llist_a;
	t_node	**llist_b;
	t_node	*initial_tail;
	t_node	*temp;

	llist_a = head_a;
	llist_b = head_b;
	if (llist_a != NULL && (*llist_a)->next != NULL)
	{
		initial_tail = (*llist_a); // saving address of the original first node
		(*llist_a) = (*llist_a)->next; // setting head to 2 node
		temp = (*llist_a);
		while (temp->next != NULL) // looking for current last node
		{
			temp = temp->next;
		}
		temp->next = initial_tail; // making current last node point to original first node
		initial_tail->next = NULL; // setting first node as last
	}
}

void	rev_rotate_b(t_node **head_a, t_node **head_b)
{
	printf("XXX rev_rotate_b XXX\n");
}

//**rra (reverse rotate a): Shift down all elements of stack a by 1.**
//>The last element becomes the first one.
void	rra(t_node **head_a, t_node **head_b)
{
	rev_rotate_a(head_a, head_b);
	ft_putstr_fd("rra\n", 1);
}

//**rrb (reverse rotate b): Shift down all elements of stack b by 1.**
//>The last element becomes the first one.
void	rrb(t_node **head_a, t_node **head_b)
{
	rev_rotate_b(head_a, head_b);
	ft_putstr_fd("rrb\n", 1);
}

//**rrr : rra and rrb at the same time.**
void	rrr(t_node **head_a, t_node **head_b)
{
	rev_rotate_a(head_a, head_b);
	rev_rotate_b(head_a, head_b);
	ft_putstr_fd("rrr\n", 1);

}