/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:09:48 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 19:33:18 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_max(t_stack *a)
{
	t_stack	*res;
	int		max_val;

	max_val = INT_MIN;
	while (a)
	{
		if (a->data > max_val)
		{
			res = a;
			max_val = a->data;
		}
		a = a->next;
	}
	return (res);
}

t_stack	*ft_min(t_stack *a)
{
	t_stack	*res;
	int		min_val;

	min_val = INT_MAX;
	while (a)
	{
		if (a->data < min_val)
		{
			res = a;
			min_val = a->data;
		}
		a = a->next;
	}
	return (res);
}

t_stack	*ft_find_val(t_stack *a, char *arg, int val)
{
	t_stack	*res;

	res = a;
	while (res)
	{
		if (ft_strcmp(arg, "data") == 0 && val == res->data)
			return (res);
		else if (ft_strcmp(arg, "idx") == 0 && val == res->idx)
			return (res);
		else if (ft_strcmp(arg, "push_cost") == 0 && val == res->push_cost)
			return (res);
		res = res->next;
	}
	return (NULL);
}

t_stack	*ft_min_push_cost(t_stack **a)
{
	t_stack	*head;
	int		min_push_cost;

	head = *a;
	min_push_cost = INT_MAX;
	while (head)
	{
		if (head->push_cost < min_push_cost)
			min_push_cost = head->push_cost;
		head = head->next;
	}
	return (ft_find_val(*a, "push_cost", min_push_cost));
}
