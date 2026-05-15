/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:54:26 by ngulam            #+#    #+#             */
/*   Updated: 2026/05/15 10:54:25 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isspace(char c) //check space_escape | 0 : No | 1 : Yes
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r')
		return (1);
	return (0);
}

long	ft_atol(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i += 1;
	}
	else if (str[i] == '+')
		i += 1;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_make_stack(t_stack **a, char	**argv, int argc)
{
	int		i;
	long	k;

	i = 0;
	while (argv[i])
	{
		if (ft_check_syntax(argv[i]) == 0)
			ft_error(a, argv, argc);
		k = ft_atol(argv[i]);
		if (k > 2147483647 || k < -2147483648)
			ft_error(a, argv, argc);
		if (ft_duplicated(*a))
			ft_error(a, argv, argc);
		ft_append (a, k);
		i++;
	}
	if (argc == 2)
		ft_free_matrix(argv);
}
