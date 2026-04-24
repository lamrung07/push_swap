/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:43:54 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/24 10:23:43 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_set_cost(t_stack *current, t_stack *a, t_stack *b)
{
	t_stack *target;
}

int	ft_min_cost(t_stack *a, t_stack *b)
{
	t_stack	*current;
	int		min_cost;

	min_cost = INT_MAX;
	current = a;
	while (current)
	{
		if (min_cost > ft_cost(current, a, b))
			min_cost = ft_cost(current, a, b);
		if (min_cost <= 2)
			return (min_cost);
		current = current->next;
	}
	return (min_cost);
}
