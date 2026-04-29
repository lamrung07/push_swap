/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 09:43:24 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/29 11:17:38 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_stack(t_stack	*a)
{
	if (!a)
		ft_printf("nothing");
	while (a)
	{
		ft_printf ("%d ", a->data);
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
	ft_printf_stack(a);
	ft_sort(&a, &b);
	ft_printf_stack(a);
	return (0);
}
