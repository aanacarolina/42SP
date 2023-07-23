/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:29:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/07/23 18:54:54 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define INT_MIN -2147483647 - 1
# define INT_MAX 2147483647

#include "libs/libft/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

t_node				*create_node(int data, t_node *next);
t_node				*arguments_to_list(int argc, char **argv);
void				insert_tail(t_node *head, t_node *new_last_node);
int					args_checker(int argc, char **argv);
