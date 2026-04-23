/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:09:48 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/23 10:38:28 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_stack *a)
{
	int	res;

	res = INT_MIN;
	while (a)
	{
		if (a->data > res)
			res = a->data;
		a = a->next;
	}
	return (res);
}

int	ft_min(t_stack *a)
{
	int	res;

	res = INT_MAX;
	while (a)
	{
		if (a->data < res)
			res = a->data;
		a = a->next;
	}
	return (res);
}

int	ft_index(t_stack *a, int n)
{
	int	res;

	res = 0;
	while (a)
	{
		if (n == a->data)
			return (res);
		a = a->next;
		res++;
	}
	return (-1);
}

t_stack	*ft_find_value(t_stack *a, int n)
{
	t_stack	*res;

	res = a;
	while (res)
	{
		if (res->data == n)
			return (res);
		res = res->next;
	}
	return (NULL);
}