/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 10:02:09 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 19:33:05 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				data;
	int				idx;
	int				push_cost;
	char			*rotate_type;
	struct s_stack	*prev;
	struct s_stack	*next;
	struct s_stack	*target;
}		t_stack;

//ALGORITHME
int		ft_min_of_4(int a, int b, int c, int d);
void	ft_apply_ra_rb(t_stack *node_a, t_stack **a, t_stack **b);
void	ft_apply_rra_rrb(t_stack *node_a, t_stack **a, t_stack **b);
void	ft_apply_ra_rrb(t_stack *node_a, t_stack **a, t_stack **b);
void	ft_apply_rra_rb(t_stack *node_a, t_stack **a, t_stack **b);

void	ft_apply_rb_ra(t_stack *node_b, t_stack **b, t_stack **a);
void	ft_apply_rrb_rra(t_stack *node_b, t_stack **b, t_stack **a);
void	ft_apply_rb_rra(t_stack *node_b, t_stack **b, t_stack **a);
void	ft_apply_rrb_ra(t_stack *node_b, t_stack **b, t_stack **a);

void	ft_bring_to_top_ab(t_stack **a, t_stack **b);
void	ft_push_a_to_b(t_stack **a, t_stack **b);
void	ft_bring_to_top_ba(t_stack **b, t_stack **a);
void	ft_push_b_to_a(t_stack **b, t_stack **a);
void	ft_set_rotate_type_ab(t_stack *node_a, t_stack *a, t_stack *b);
void	ft_set_rotate_type_ba(t_stack *node_b, t_stack *b, t_stack *a);
void	ft_set_index(t_stack **a);
void	ft_set_target_node_a(t_stack *node_a, t_stack **b);
void	ft_set_values_a(t_stack **a, t_stack **b);
void	ft_set_target_node_b(t_stack *node_b, t_stack **a);
void	ft_set_values_b(t_stack **b, t_stack **a);
void	ft_sort_small(t_stack **a);
void	ft_re_arrange_a(t_stack **a);
void	ft_sort(t_stack **a, t_stack **b);

//ARGS_PROCESSING
int		ft_check_syntax(char *str);
int		ft_duplicated(t_stack *a);
void	ft_free_stack(t_stack	**a);
void	ft_error(t_stack **a);
int		ft_isspace(char c);
long	ft_atol(const char *str);
void	ft_make_stack(t_stack	**a, char	**argv);
void	ft_append(t_stack	**a, int data);
void	ft_printf_stack(t_stack	*a);
int		ft_checksorted(t_stack *head);
int		ft_stacklen(t_stack *head);
t_stack	*ft_last(t_stack *head);
t_stack	*ft_new_node(int data);
void	ft_append(t_stack	**a, int data);
void	ft_set_index(t_stack **a);
t_stack	*ft_max(t_stack *a);
t_stack	*ft_min(t_stack *a);
t_stack	*ft_find_val(t_stack *a, char *arg, int val);
t_stack	*ft_min_push_cost(t_stack **a);

//OPERATIONS
void	ft_push(t_stack	**res, t_stack **des);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **b, t_stack **a);
void	ft_swap(t_stack	**a);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rotate(t_stack	**a);
void	ft_ra(t_stack	**a);
void	ft_rb(t_stack	**b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_reverse_rotate(t_stack	**a);
void	ft_rra(t_stack	**a);
void	ft_rrb(t_stack	**b);
void	ft_rrr(t_stack **a, t_stack **b);

#endif