/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:19:18 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/28 17:12:05 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bring_to_top_ab(t_stack **a, t_stack **b)
{
	t_stack	*node_a;
	t_stack	*target;

	node_a = ft_min_push_cost(a);
	target = node_a->target;
	if (ft_strcmp(node_a->rotate_type, "ra_rb") == 0)
		ft_apply_ra_rb(node_a, a, b);
	else if (ft_strcmp(node_a->rotate_type, "rra_rrb") == 0)
		ft_apply_rra_rrb(node_a, a, b);
	else if (ft_strcmp(node_a->rotate_type, "ra_rrb") == 0)
		ft_apply_ra_rrb(node_a, a, b);
	else if (ft_strcmp(node_a->rotate_type, "rra_rb") == 0)
		ft_apply_rra_rb(node_a, a, b);
}

void	ft_push_a_to_b(t_stack **a, t_stack **b);
