/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 10:31:11 by ngulam            #+#    #+#             */
/*   Updated: 2026/05/15 10:52:27 by ngulam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *str, char sep)
{
	int		count;
	int		inside_word;

	count = 0;
	while (*str)
	{
		inside_word = 0;
		while (*str == sep && *str)
			++str;
		while (*str != sep && *str)
		{
			if (inside_word == 0)
			{
				++count;
				inside_word = 1;
			}
			++str;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char sep)
{
	static int	cursor = 0;
	char		*next_str;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == sep)
		++cursor;
	while ((str[cursor + len] != sep) && str[cursor + len])
		++len;
	next_str = malloc((size_t)len * sizeof(char) + 1);
	if (!next_str)
		return (NULL);
	while ((str[cursor] != sep) && str[cursor])
		next_str[i++] = str[cursor++];
	next_str[i] = '\0';
	return (next_str);
}

char	**ft_split2(char *str, char sep)
{
	int		words;
	char	**res;
	int		i;

	i = 0;
	words = count_words(str, sep);
	if (!words)
		exit(1);
	res = malloc(sizeof(char *) * (size_t)(words + 2));
	if (!res)
		return (NULL);
	while (words-- >= 0)
	{
		if (i == 0)
		{
			res[i] = malloc(sizeof(char));
			if (!res[i])
				return (NULL);
			res[i++][0] = '\0';
			continue ;
		}
		res[i++] = get_next_word(str, sep);
	}
	res[i] = NULL;
	return (res);
}
