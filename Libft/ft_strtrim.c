/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:22:33 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/17 15:06:00 by mgrass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_calspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (s)
	{
		while (s[i] && (ft_calspace(s[i])))
			i++;
		j = ft_strlen(s);
		if (!j && !i)
			return (ft_strdup(s));
		while (s[j - 1] && (ft_calspace(s[j - 1])))
			j--;
		if (j < i)
			j = i;
		return (ft_strsub(s, i, (j - i)));
	}
	return (NULL);
}
