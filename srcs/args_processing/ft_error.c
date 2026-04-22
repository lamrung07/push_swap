/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:42:57 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/16 16:57:27 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_duplicated(t_stack *a) //1 : duplicated | 0 : no duplicated
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->data == tmp->data)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

void	ft_free_stack(t_stack	**a)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!a)
		return ;
	current = *a;
	while (current)
	{
		tmp = current->next;
		current->data = 0;
		free(current);
		current = tmp;
	}
	*a = NULL;
}

void	ft_error(t_stack **a)
{
	ft_free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}
