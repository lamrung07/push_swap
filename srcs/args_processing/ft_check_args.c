/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:07:33 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/16 15:00:20 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_syntax(char *str) //Syntax error| 1 : No Error | 0 : Error
{
	int	i;

	i = 0;
	if (!(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
		return (0);
	if (str[i] == '+' || str[i] == '-')
	{
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (0);
		i += 1;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
