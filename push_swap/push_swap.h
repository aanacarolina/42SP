/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:29:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/02 19:10:27 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include "libs/libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

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
int					*args_array(int argc, char **argv);
int					*bubble_sort(int *arr, int size);
void				swap_aux(t_node **head);
void				sa(t_node **head_a);
void				sb(t_node **head_b);
void				ss(t_node **head_a, t_node **head_b);
void				push_a(t_node **head_a, t_node **head_b);
void				push_b(t_node **head_a, t_node **head_b);
void				pa(t_node **head_a, t_node **head_b);
void				pb(t_node **head_a, t_node **head_b);
void				rotate_a(t_node **head_a, t_node **head_b);
void				rotate_b(t_node **head_a, t_node **head_b);
void				ra(t_node **head_a, t_node **head_b);
void				rb(t_node **head_a, t_node **head_b);
void				rr(t_node **head_a, t_node **head_b);
void				rev_rotate_a(t_node **head_a, t_node **head_b);
void				rev_rotate_b(t_node **head_a, t_node **head_b);
void				rra(t_node **head_a, t_node **head_b);
void				rrb(t_node **head_a, t_node **head_b);
void				rrr(t_node **head_a, t_node **head_b);
int					push_swap(void);
int					stack_size(t_node **stack);
int					node_position(t_node **stack, int node);
int					last_node(t_node **stack);
int					size_3_checker(t_node **stack);
int					max_num(t_node **stack);
int					min_num(t_node **stack);
void				TESTE_create_node(int argc, char **argv);
void				TESTE_arguments_to_list(int argc, char **argv);
void				TESTE_args_checker(void);
void				TESTE_non_int_checker(void);
void				TESTE_max_min_int_checker(void);
void				DEBUG_printlist(t_node *head);
void				TESTE_push_a(int argc_a, char **list_a, int argc_b,
						char **list_b);
void				TESTE_push_b(int argc_a, char **list_a, int argc_b,
						char **list_b);
void				DEBUG_llist(t_node **head_a, t_node **head_b);
void				DEBUG_one_item_llist(t_node **head_a, t_node **head_b);
void				DEBUG_stack_size(t_node **stack);
void				DEBUG_node_position(t_node **stack, int node);
void				DEBUG_last_node(t_node **stack);
void				DEBUG_size_3_checker(t_node **stack);
void				DEBUG_max_min(t_node **stack);

#endif