/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:19:56 by rkina             #+#    #+#             */
/*   Updated: 2019/09/11 13:50:45 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hastack, const char *needle, size_t len)
{
	int	i;
	int j;

	i = 0;
	if (*needle == '\0')
		return ((char*)hastack);
	while (hastack[i] && (int)len-- >= i)
	{
		j = 0;
		while (hastack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)&hastack[i]);
		}
		i++;
	}
	return (0);
}
