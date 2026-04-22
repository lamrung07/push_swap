 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:19:51 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/21 14:35:10 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack	**src, t_stack **des)
{
	t_stack	*top;

	if (!(*src))
		return ;
	top = (*src);
	(*src) = (*src)->next;
	top->next = (*des);
	top->prev = NULL;
	if (*des)
		(*des)->prev = top;
	(*des) = top;
}

void	ft_pa(t_stack **b, t_stack **a)
{
	ft_push(b, a);
	ft_printf("pa\n");
}

void	ft_pb(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	ft_printf("pb\n");
}
