/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:52:26 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/27 16:21:57 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	int		stack_len_a;

	stack_len_a = ft_stacklen(*a);
	if (stack_len_a-- > 3 && ft_checksorted(*a) == 0)
		ft_pb(a, b);
	if (stack_len_a-- > 3 && ft_checksorted(*a) == 0)
		ft_pb(a, b);
	ft_set_values_a(a, b);
	// while (stack_len_a-- > 3 && ft_checksorted(*a) == 0)
	// {
	// 	ft_set_values_a((*a), a, b);
	// }
}
