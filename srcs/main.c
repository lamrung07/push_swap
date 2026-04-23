/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 09:43:24 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/23 11:11:55 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_stack(t_stack	*a)
{
	if (!a)
		ft_printf("nothing");
	while (a)
	{
		ft_printf ("%d target--> %d ", a->data, a->target->data);
		a = a->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		ft_error(&a);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = argv + 1;
	ft_make_stack(&a, argv);
	if (ft_duplicated(a) == 1)
		ft_error(&a);
	// if (ft_checksorted(a) != 1)
	// 	ft_sort(&a);'
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_assign_target_a(&a, &b);
	ft_printf_stack(a);
	ft_printf_stack(b);
	return (0);
}
