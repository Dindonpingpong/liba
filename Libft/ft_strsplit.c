/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:36:12 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/12 19:26:33 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strultrim(char const *s, char delim)
{
	int		i;
	int		j;
	int		c;
	char	*tmp;

	i = 0;
	c = 0;
	if (s)
	{
		j = ft_strlen(s) - 1;
		while (s[i] && s[i] == delim)
			i++;
		if (!(tmp = (char *)malloc(sizeof(j-i+1))))
			return (NULL);
		while (s[i] != j && s[j] == delim)
			j--;
		while (i <= j)
			tmp[c++] = s[i++];
		tmp[c] = '\0';
		return (tmp);
	}
	return (NULL);
}

int		g_n_words;

static int		is_whitespace(char s, char c)
{
	return (s == c);
}

static int		count_words(char *str, char c)
{
	int	word;
	int number_words;
	int i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_delim(str[i], c) && word == 0)
		{
			++number_words;
			word = 1;
		}
		else if (is_delim(str[i], c))
			word = 0;
		i++;
	}
	return (number_words);
}

static int		calculate_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !is_whitespace(str[i]))
		++i;
	return (i);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**array;
	int		word;
	int		i;
	int		length;

	array = (char **)malloc(count_words(str) * sizeof(char *) + 1);
	word = 0;
	g_n_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_whitespace(str[i]) && word == 0)
		{
			word = 1;
			length = calculate_length(&str[i]);
			array[g_n_words] = (char *)malloc((length + 1) * sizeof(char));
			array[g_n_words] = ft_strncpy(array[g_n_words], &str[i], length);
			++g_n_words;
		}
		else if (is_whitespace(str[i]))
			word = 0;
		++i;
	}
	array[g_n_words] = 0;
	return (array);
}
