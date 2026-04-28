/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:26:29 by ngulam            #+#    #+#             */
/*   Updated: 2026/04/28 15:43:42 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_of_4(int a, int b, int c, int d)
{
	int	res;

	res = INT_MAX;
	if (a <= res)
		res = a;
	if (b <= res)
		res = b;
	if (c <= res)
		res = c;
	if (d <= res)
		res = d;
	return (res);
}
