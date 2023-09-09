/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:29:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/09 16:18:29 by anacaro3         ###   ########.fr       */
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
char				**check_and_parse_argv(char **argv);
int					checker_wrapper(int argc, char **argv);
int					*args_array(int argc, char **argv);
void				swap(int *a, int *b);
int					dups_checker_array(int argc, char **argv);
int					*bubble_sort(int *arr, int size);
void				swap_aux(t_node **head);
void				sa(t_node **head_a);
void				sb(t_node **head_b);
void				ss(t_node **head_a, t_node **head_b);
void				push_a(t_node **head_a, t_node **head_b);
void				push_b(t_node **head_a, t_node **head_b);
void				pa(t_node **head_a, t_node **head_b);
void				pb(t_node **head_a, t_node **head_b);
void				rotate_a(t_node **head_a);
void				rotate_b(t_node **head_b);
void				ra(t_node **head_a);
void				rb(t_node **head_b);
void				rr(t_node **head_a, t_node **head_b);
void				rev_rotate_a(t_node **head_a);
void				rev_rotate_b(t_node **head_b);
void				rra(t_node **head_a);
void				rrb(t_node **head_b);
void				rrr(t_node **head_a, t_node **head_b);
void				push_swap(t_node **head_a, t_node **head_b);
int					stack_size(t_node **stack);
int					node_position(t_node **stack, int node);
int					last_node(t_node **stack);
void				size_2_checker(t_node **stack);
int					size_3_checker(t_node **stack);
int					max_num(t_node **stack);
int					min_num(t_node **stack);
int					position_min_b(int data, t_node **head_b);
int					is_sorted(t_node **head_a);
void				sort_three(t_node **stack);
void				final_sort_a(t_node **head_a);
void				free_stack(t_node **stack);
void				exit_free(t_node **stack);
void				DEBUG_printlist(t_node *head);

#endif