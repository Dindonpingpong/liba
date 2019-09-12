/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:28:16 by rkina             #+#    #+#             */
/*   Updated: 2019/09/12 20:41:39 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_delim(const char s, char c)
{
	return (s == c);
}

static int		count_words(char const *str, char c)
{
	int			word;
	int			number_words;
	int			i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i++])
	{
		if (!is_delim(str[i], c) && word == 0)
		{
			number_words++;
			word = 1;
		}
		else if (is_delim(str[i], c))
			word = 0;
	}
	return (number_words);
}

static int		calculate_length(char const *str, char c)
{
	int			i;

	i = 0;
	while (str[i] && !is_delim(str[i], c))
		i++;
	return (i);
}

char			**ft_strsplit(char const *str, char c)
{
	char		**array;
	int			word;
	int			length;
	int			g_n_words;

	array = (char **)malloc(count_words(str, c) * sizeof(char *) + 1);
	word = 0;
	g_n_words = 0;
	while (*str)
	{
		if (!is_delim(*str, c) && word == 0)
		{
			word = 1;
			length = calculate_length(&*str, c);
			array[g_n_words] = (char *)malloc((length + 1) * sizeof(char));
			array[g_n_words] = ft_strncpy(array[g_n_words], &*str, length);
			g_n_words++;
		}
		else if (is_delim(*str, c))
			word = 0;
		str++;
	}
	array[g_n_words] = 0;
	return (array);
}
