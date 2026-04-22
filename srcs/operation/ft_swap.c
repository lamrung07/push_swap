/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 09:52:08 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/21 14:36:05 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack	**a)
{
	t_stack	*a1;

	if (!*a || !((*a)->next))
		return ;
	a1 = (*a)->next;
	(*a)->next = a1->next;
	(*a)->prev = a1;
	if ((a1->next))
		a1->next->prev = *a;
	a1->next = *a;
	a1->prev = NULL;
	*a = a1;
}

void	ft_sa(t_stack **a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	ft_sb(t_stack **b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	if (1)
		ft_printf("ss\n");
}
