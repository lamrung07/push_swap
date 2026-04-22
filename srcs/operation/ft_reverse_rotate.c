/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:28:14 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/21 15:26:22 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack	**a)
{
	t_stack	*lastnode;
	t_stack	*lastnode2;

	if (!(*a) || (*a)->next == NULL)
		return ;
	lastnode = ft_last(*a);
	lastnode2 = lastnode->prev;
	(*a)->prev = lastnode;
	lastnode->next = (*a);
	lastnode->prev = NULL;
	lastnode2->next = NULL;
	(*a) = lastnode;
}

void	ft_rra(t_stack	**a)
{
	ft_reverse_rotate(a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stack	**b)
{
	ft_reverse_rotate(b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	if (1)
		ft_printf("rrr\n");
}
