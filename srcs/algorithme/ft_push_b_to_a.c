/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:59:47 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 11:13:28 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bring_to_top_ba(t_stack **b, t_stack **a)
{
	t_stack	*node_b;
	t_stack	*target;

	node_b = ft_min_push_cost(b);
	target = node_b->target;
	if (ft_strcmp(node_b->rotate_type, "rb_ra") == 0)
		ft_apply_rb_ra(node_b, b, a);
	else if (ft_strcmp(node_b->rotate_type, "rrb_rra") == 0)
		ft_apply_rrb_rra(node_b, b, a);
	else if (ft_strcmp(node_b->rotate_type, "rb_rra") == 0)
		ft_apply_rb_rra(node_b, b, a);
	else if (ft_strcmp(node_b->rotate_type, "rrb_ra") == 0)
		ft_apply_rra_rb(node_b, b, a);
}

void	ft_push_b_to_a(t_stack **b, t_stack **a)
{
	while (ft_stacklen(*b) >= 0)
	{
		ft_set_values_b(b, a);
		ft_bring_to_top_ba(b, a);
		ft_pa(b, a);
	}
}
