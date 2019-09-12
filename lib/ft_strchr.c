/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:02:54 by rkina             #+#    #+#             */
/*   Updated: 2019/09/12 15:57:00 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	char			*ptr1;

	chr = (unsigned char)c;
	ptr1 = (char *)s;
	while (*ptr1)
	{
		if (*ptr1 == chr)
			return (ptr1);
		ptr1++;
	}
	if (chr == '\0')
		return (ptr1);
	return (0);
}
