/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:19:18 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/23 11:27:09 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_target_a(t_stack **a, t_stack **b)
{
	t_stack	*current;
	t_stack	*tmp;
	int		target_val;

	current = *a;
	while (current)
	{
		tmp = *b;
		target_val = INT_MIN;
		while (tmp)
		{
			if (current->data < ft_min((*b)))
			{
				target_val = ft_max(*b);
				break ;
			}
			else
			{
				if ((target_val < tmp->data) && (tmp->data < current->data))
					target_val = tmp->data;
				tmp = tmp->next;
			}
		}
		current->target = ft_find_value((*b), target_val);
		current = current->next;
	}
}

// void	ft_push_a_to_b(t_stack **a, t_stack **b)
// {
// 	while (ft_stacklen(*a) > 3)
// 	{
// 		if (ft_stacklen(*b) <= 2)
// 			ft_pb(a, b);
// 		else
// 		{
// 			ft_assign_target(t_stack **a, t_stack **b)
// 		}
// 	}
// }
