/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:29:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/08/13 17:16:51 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MIN -2147483647 - 1
#define INT_MAX 2147483647

#include "libs/libft/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

t_node				*create_node(int data, t_node *next);
t_node				*arguments_to_list(int argc, char **argv);
void				insert_tail(t_node *head, t_node *new_last_node);
int					dups_checker(int argc, char **argv);
int					non_int_checker(int argc, char **argv);
int					max_min_int_checker(int argc, char **argv);
int					checker_wrapper(int argc, char **argv);
int 				*args_array(int argc, char **argv);
int					*bubbleSort(int *arr, int size);
void				sa(t_node **head_a);
void				sb(t_node **head_b);
void				ss(t_node **head_a, t_node **head_b);
void				pa(t_node **head_a, t_node **head_b);
void				TESTE_create_node(int argc, char **argv);
void				TESTE_arguments_to_list(int argc, char **argv);
void				TESTE_args_checker(void);
void				TESTE_non_int_checker(void);
void				TESTE_max_min_int_checker(void);
void				DEBUG_printlist(t_node *head);

