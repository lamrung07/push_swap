/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:41:58 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/16 16:54:14 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_stack *head) //1 : stack is sorted| 0 : stack isn't sorted
{
	if (!head)
		return (0);
	while (head->next)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

int	ft_stacklen(t_stack *head)
{
	int	res;

	res = 0;
	while (head)
	{
		head = head->next;
		res++;
	}
	return (res);
}

t_stack	*ft_last(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}

t_stack	*ft_new_node(int data)
{
	t_stack	*newnode;

	newnode = malloc(sizeof(t_stack));
	if (!newnode)
		return (NULL);
	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	return (newnode);
}

void	ft_append(t_stack	**a, int data)
{
	t_stack	*newnode;
	t_stack	*lastnode;

	newnode = ft_new_node(data);
	if (*a == NULL)
		*a = newnode;
	else
	{
		lastnode = ft_last(*a);
		lastnode->next = newnode;
		newnode->prev = lastnode;
	}
}
