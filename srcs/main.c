/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 09:43:24 by ngulam            #+#    #+#             */
/*   Updated: 2026/05/15 11:02:14 by ngulam           ###   ########.fr       */
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
		return (1);
	else if (argc == 2)
		argv = ft_split2(argv[1], ' ');
	ft_make_stack(&a, argv + 1, argc);
	if (ft_duplicated(a) == 1)
		ft_error(&a, argv, argc);
	if (ft_checksorted(a) == 0)
		ft_sort(&a, &b);
	ft_free_stack(&a);
	return (0);
}
