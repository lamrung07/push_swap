/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_rotate_a_to_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:57:38 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/28 16:50:54 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_apply_ra_rb(t_stack *node_a, t_stack **a, t_stack **b)
{
	t_stack	*target;

	target = node_a->target;
	while (node_a != (*a) && target != (*b))
		ft_rr(a, b);
	while (node_a != (*a))
		ft_ra(a);
	while (target != (*b))
		ft_rb(b);
}

void	ft_apply_rra_rrb(t_stack *node_a, t_stack **a, t_stack **b)
{
	t_stack	*target;

	target = node_a->target;
	while (node_a != (*a) && target != (*b))
		ft_rrr(a, b);
	while (node_a != (*a))
		ft_rra(a);
	while (target != (*b))
		ft_rrb(b);
}

void	ft_apply_ra_rrb(t_stack *node_a, t_stack **a, t_stack **b)
{
	t_stack	*target;

	target = node_a->target;
	while (node_a != (*a))
		ft_ra(a);
	while (target != (*b))
		ft_rrb(b);
}

void	ft_apply_rra_rb(t_stack *node_a, t_stack **a, t_stack **b)
{
	t_stack	*target;

	target = node_a->target;
	while (node_a != (*a))
		ft_rra(a);
	while (target != (*b))
		ft_rb(b);
}
