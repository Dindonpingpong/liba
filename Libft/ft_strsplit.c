/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:36:12 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/17 19:35:51 by mgrass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isdelimiter(const char s, char c)
{
	return (s == c);
}

static int		ft_count_words(char const *str, char c)
{
	int			word;
	int			number_words;
	int			i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i++])
	{
		if (!ft_isdelimiter(str[i], c) && word == 0)
		{
			number_words++;
			word = 1;
		}
		else if (ft_isdelimiter(str[i], c))
			word = 0;
	}
	return (number_words);
}

static int		ft_calculate_length(char const *str, char c)
{
	int			i;

	i = 0;
	while (str[i] && !ft_isdelimiter(str[i], c))
		i++;
	return (i);
}

char			**ft_strsplit(char const *str, char c)
{
	char		**array;
	int			word;
	int			length;
	int			next_words;

	if (str)
	{
		array = (char **)malloc(sizeof(char *) * ft_count_words(str, c) + 1);
		word = 0;
		next_words = 0;
		while (*str)
		{
			if (!ft_isdelimiter(*str, c) && word == 0)
			{
				word = 1;
				length = ft_calculate_length(&*str, c);
				array[next_words] = (char *)malloc((length + 1) * sizeof(char));
				array[next_words] = ft_strncpy(array[next_words], &*str, length);
				next_words++;
			}
			else if (ft_isdelimiter(*str, c))
				word = 0;
			str++;
		}
		array[next_words] = 0;
		return (array);
	}
	return (NULL);
}
