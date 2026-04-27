/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:19:18 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/27 19:04:12 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_type_1(t_stack node_a, t_stack **a, t_stack **b)
{
	
}

void	ft_push_to_top_ab(t_stack **a, t_stack **b)
{
	t_stack	*node_a;

	node_a = ft_min_push_cost(a);
	if (node_a->idx <= ft_stacklen(*a) / 2
		&& node_a->target->idx > ft_stacklen(*b) / 2)
		ft_push_type_1(node_a, a, b);
	else if (node_a->idx > ft_stacklen(*a) / 2
		&& node_a->target->idx <= ft_stacklen(*b) / 2)
		ft_push_type_1(node_a, a, b);
	else
		ft_push_type_2(node_a, a, b);
}

void	ft_push_a_to_b(t_stack **a, t_stack **b)
{
	
}
