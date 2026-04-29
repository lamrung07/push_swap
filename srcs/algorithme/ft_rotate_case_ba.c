/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_case_ba.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:36:16 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 11:14:11 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rb_ra(t_stack *node_b)
{
	t_stack	*target;

	target = node_b->target;
	if (node_b->idx > target->idx)
		return (node_b->idx - 1);
	else
		return (target->idx - 1);
}

int	ft_case_rrb_rra(t_stack *node_b, t_stack *b, t_stack *a)
{
	int		stack_len_a;
	int		stack_len_b;
	t_stack	*target;

	stack_len_a = ft_stacklen(a);
	stack_len_b = ft_stacklen(b);
	target = node_b->target;
	if (stack_len_b - node_b->idx > stack_len_a - target->idx)
		return (stack_len_b - node_b->idx + 1);
	else
		return (stack_len_a - target->idx + 1);
}

int	ft_case_rb_rra(t_stack *node_b, t_stack *a)
{
	int		res;
	int		stack_len_a;
	t_stack	*target;

	stack_len_a = ft_stacklen(a);
	target = node_b->target;
	res = node_b->idx + (stack_len_a - target->idx);
	return (res);
}

int	ft_case_rrb_ra(t_stack *node_b, t_stack *b)
{
	int		res;
	int		stack_len_b;
	t_stack	*target;

	stack_len_b = ft_stacklen(b);
	target = node_b->target;
	res = target->idx + (stack_len_b - node_b->idx);
	return (res);
}

void	ft_set_rotate_type_ba(t_stack *node_b, t_stack *b, t_stack *a)
{
	int	rb_ra;
	int	rrb_rra;
	int	rb_rra;
	int	rrb_ra;

	rb_ra = ft_case_rb_ra(node_b);
	rrb_rra = ft_case_rrb_rra(node_b, b, a);
	rb_rra = ft_case_rb_rra(node_b, a);
	rrb_ra = ft_case_rrb_ra(node_b, b);
	node_b->push_cost = ft_min_of_4(rb_ra, rrb_rra, rb_rra, rrb_ra);
	if (node_b->push_cost == rb_ra)
		node_b->rotate_type = "rb_ra";
	if (node_b->push_cost == rrb_rra)
		node_b->rotate_type = "rrb_rra";
	if (node_b->push_cost == rb_rra)
		node_b->rotate_type = "rb_rra";
	if (node_b->push_cost == rrb_ra)
		node_b->rotate_type = "rrb_ra";
}
