/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:52:26 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/22 10:41:59 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
{
	if (ft_stacklen(*a) <= 3 && ft_checksorted(*a) == 0)
		ft_sort_small(a);
	else
	{
		ft_push_to_b(a, b);
		ft_push_back(a, b);
	}
}
