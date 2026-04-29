/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:02:13 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 18:12:01 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small(t_stack **a)
{
	if (ft_stacklen(*a) == 2)
	{
		ft_sa(a);
		return ;
	}
	if ((*a)->data == ft_max(*a)->data)
		ft_ra(a);
	else if ((*a)->next->data == ft_max(*a)->data)
		ft_rra(a);
	if (ft_checksorted(*a) == 0)
		ft_sa(a);
}


