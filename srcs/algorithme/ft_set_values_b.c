/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_values_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:12:23 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 18:00:55 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_set_index(t_stack **b)
// {
// 	t_stack	*head;
// 	int		i;

// 	i = 1;
// 	head = (*b);
// 	while (head)
// 	{
// 		head->idx = i;
// 		i++;
// 		head = head->next;
// 	}
// }

void	ft_set_target_node_b(t_stack *node_b, t_stack **a)
{
	t_stack	*current_a;
	int		target_val;

	current_a = (*a);
	target_val = INT_MAX;
	while (current_a)
	{
		if (node_b->data > ft_max(*a)->data)
		{
			node_b->target = ft_min(*a);
			return ;
		}
		if ((target_val > current_a->data) && (node_b->data < current_a->data))
			target_val = current_a->data;
		current_a = current_a->next;
	}
	node_b->target = ft_find_val((*a), "data", target_val);
}

void	ft_set_values_b(t_stack **b, t_stack **a)
{
	t_stack	*current;

	current = (*b);
	if (!current)
		return ;
	ft_set_index(b);
	ft_set_index(a);
	while (current)
	{
		ft_set_target_node_b(current, a);
		ft_set_rotate_type_ba(current, *b, *a);
		current = current->next;
	}
}
