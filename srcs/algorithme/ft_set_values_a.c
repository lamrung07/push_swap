/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_values_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:24:21 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/24 18:14:37 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_index(t_stack **a)
{
	t_stack	*head;
	int		i;

	i = 1;
	head = (*a);
	while (head)
	{
		head->idx = i;
		i++;
		head = head->next;
	}
}

void	ft_set_target_node_a(t_stack *node_a, t_stack **b)
{
	t_stack	*current_b;
	int		target_val;

	current_b = (*b);
	target_val = INT_MIN;
	while (current_b)
	{
		if (node_a->data < ft_min(*b)->data)
		{
			node_a->target = ft_max(*b);
			return ;
		}
		if ((target_val < current_b->data) && (node_a->data > current_b->data))
			target_val = current_b->data;
		current_b = current_b->next;
	}
	current->target = ft_find_val((*b), data, target_val);
}

int ft_set_cost_node_a(t_stack *current, t_stack *a, t_stack *b)
{
	t_stack *target;
	
}