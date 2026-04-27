/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_values_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:24:21 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/27 18:30:21 by ngulam           ###   ########.fr       */
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
	node_a->target = ft_find_val((*b), "data", target_val);
}

void	ft_set_cost_node_a(t_stack *current, t_stack *a, t_stack *b)
{
	int		node_cost;
	t_stack	*target;
	int		stack_len_a;
	int		stack_len_b;

	stack_len_a = ft_stacklen(a);
	stack_len_b = ft_stacklen(b);
	target = current->target;
	if (current->idx <= stack_len_a / 2)
		node_cost = current->idx - 1;
	else
		node_cost = stack_len_a - current->idx + 1;
	if (target->idx <= stack_len_b / 2)
		node_cost += target->idx - 1;
	else
		node_cost += stack_len_b - target->idx + 1;
	current->push_cost = node_cost + 1;
}

void	ft_set_values_a(t_stack **a, t_stack **b)
{
	t_stack	*current;

	current = (*a);
	if (!current)
		return ;
	ft_set_index(a);
	ft_set_index(b);
	while (current)
	{
		ft_set_target_node_a(current, b);
		ft_set_cost_node_a(current, *a, *b);
		current = current->next;
	}
}
