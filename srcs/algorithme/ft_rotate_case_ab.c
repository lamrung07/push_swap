/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_case_ab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:49:37 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/28 15:42:32 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_ra_rb(t_stack *node_a)
{
	int		res;
	t_stack	*target;

	target = node_a->target;
	res = INT_MAX;
	if (node_a->idx > target->idx)
		return (node_a->idx - 1);
	else
		return (target->idx - 1);
}

int	ft_case_rra_rrb(t_stack *node_a, t_stack *a, t_stack *b)
{
	int		res;
	int		stack_len_a;
	int		stack_len_b;
	t_stack	*target;

	stack_len_a = ft_stacklen(a);
	stack_len_b = ft_stacklen(b);
	target = node_a->target;
	res = INT_MAX;
	if (stack_len_a - node_a->idx > stack_len_b - target->idx)
		return (stack_len_a - node_a->idx + 1);
	else
		return (stack_len_b - target->idx + 1);
}

int	ft_case_ra_rrb(t_stack *node_a, t_stack *b)
{
	int		res;
	int		stack_len_b;
	t_stack	*target;

	stack_len_b = ft_stacklen(b);
	target = node_a->target;
	res = node_a->idx + (stack_len_b - target->idx);
	return (res);
}

int	ft_case_rra_rb(t_stack *node_a, t_stack *a)
{
	int		res;
	int		stack_len_a;
	t_stack	*target;

	stack_len_a = ft_stacklen(a);
	target = node_a->target;
	res = target->idx + (stack_len_a - node_a->idx);
	return (res);
}

void	ft_set_rotate_type(t_stack *node_a, t_stack *a, t_stack *b)
{
	int	ra_rb;
	int	rra_rrb;
	int	ra_rrb;
	int	rra_rb;

	ra_rb = ft_case_ra_rb(node_a);
	rra_rrb = ft_case_rra_rrb(node_a, a, b);
	ra_rrb = ft_case_ra_rrb(node_a, b);
	rra_rb = ft_case_rra_rb(node_a, a);
	node_a->push_cost = ft_min_of_4(ra_rb, rra_rrb, ra_rrb, rra_rb);
	if (node_a->push_cost == ra_rb)
		node_a->rotate_type = "ra_rb";
	if (node_a->push_cost == rra_rrb)
		node_a->rotate_type = "rra_rrb";
	if (node_a->push_cost == ra_rrb)
		node_a->rotate_type = "ra_rrb";
	if (node_a->push_cost == rra_rb)
		node_a->rotate_type = "rra_rb";
}
