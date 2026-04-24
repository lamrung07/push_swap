/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_target.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:24:21 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/24 10:51:16 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_target_a(t_stack **a, t_stack **b)
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
