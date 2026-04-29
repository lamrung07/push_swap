/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:52:26 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 18:10:22 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_re_arrange_a(t_stack **a)
{
	int		stack_len_a;
	t_stack	*min_node_a;

	stack_len_a = ft_stacklen(*a);
	ft_set_index(a);
	min_node_a = ft_min(*a);
	if (min_node_a->idx <= stack_len_a / 2)
	{
		while (min_node_a != (*a))
			ft_ra(a);
	}
	else
	{
		while (min_node_a != (*a))
			ft_rra(a);
	}
}

void	ft_sort(t_stack **a, t_stack **b)
{
	int		stack_len_a;

	stack_len_a = ft_stacklen(*a);
	if (stack_len_a == 2)
	{
		ft_sort_small(a);
		return ;
	}
	if (stack_len_a-- > 3 && ft_checksorted(*a) == 0)
		ft_pb(a, b);
	if (stack_len_a-- > 3 && ft_checksorted(*a) == 0)
		ft_pb(a, b);
	ft_push_a_to_b(a, b);
	ft_sort_small(a);
	ft_push_b_to_a(b, a);
	ft_re_arrange_a(a);
}
