//qdo accessamos valor DEREF
//qdo disponibilizamos o endereço REF

# include"libs/libft/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_node;


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
			(*llist_a) = (*llist_a)->next;
			(*llist_b)->next = NULL;
		}
		else
		{
			(*llist_b) = (*llist_a);
			(*llist_a) = (*llist_a)->next;
			(*llist_b)->next = temp_b;
		}
	}
}
