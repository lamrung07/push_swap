/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_rotate_b_to_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:48:24 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 10:56:24 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_apply_rb_ra(t_stack *node_b, t_stack **b, t_stack **a)
{
	t_stack	*target;

	target = node_b->target;
	while (node_b != (*b) && target != (*a))
		ft_rr(a, b);
	while (node_b != (*b))
		ft_rb(b);
	while (target != (*a))
		ft_rb(a);
}

void	ft_apply_rrb_rra(t_stack *node_b, t_stack **b, t_stack **a)
{
	t_stack	*target;

	target = node_b->target;
	while (node_b != (*b) && target != (*a))
		ft_rrr(a, b);
	while (node_b != (*b))
		ft_rrb(b);
	while (target != (*a))
		ft_rra(a);
}

void	ft_apply_rb_rra(t_stack *node_b, t_stack **b, t_stack **a)
{
	t_stack	*target;

	target = node_b->target;
	while (node_b != (*b))
		ft_rb(b);
	while (target != (*a))
		ft_rra(a);
}

void	ft_apply_rrb_ra(t_stack *node_b, t_stack **b, t_stack **a)
{
	t_stack	*target;

	target = node_b->target;
	while (node_b != (*b))
		ft_rrb(b);
	while (target != (*a))
		ft_ra(a);
}
