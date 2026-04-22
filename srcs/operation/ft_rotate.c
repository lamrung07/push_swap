/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 20:44:48 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/21 14:35:14 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack	**a)
{
	t_stack	*firstnode;
	t_stack	*lastnode;

	if (!(*a) || (*a)->next == NULL)
		return ;
	firstnode = *a;
	lastnode = ft_last(firstnode);
	(*a) = (*a)->next;
	firstnode->next = NULL;
	firstnode->prev = lastnode;
	lastnode->next = firstnode;
}

void	ft_ra(t_stack	**a)
{
	ft_rotate(a);
	ft_printf("ra\n");
}

void	ft_rb(t_stack	**b)
{
	ft_rotate(b);
	ft_printf("rb\n");
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	if (1)
		ft_printf("rr\n");
}

