/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:02:13 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/22 10:21:55 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small(t_stack **a)
{
	if (ft_stacklen(*a) == 2 && ft_checksorted(*a) == 0)
	{
		ft_sa(a);
		return ;
	}
	if ((*a)->data == ft_max(*a))
	{
		ft_ra(a);
		if (!ft_checksorted(*a))
			ft_sa(a);
	}
	else if ((*a)->data == ft_min(*a))
	{
		ft_rra(a);
		ft_sa(a);
	}
	else
	{
		if (ft_index(*a, ft_max(*a)) == 1)
			ft_rra(a);
		else
			ft_sa(a);
	}
}


