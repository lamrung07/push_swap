/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:09:48 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/21 15:11:15 by ngulam           ###   ########.fr       */
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
