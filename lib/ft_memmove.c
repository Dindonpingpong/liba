/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:41:41 by rkina             #+#    #+#             */
/*   Updated: 2019/09/12 15:41:55 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (ptr1 == ptr2)
		return (dst);
	if (ptr1 > ptr2)
	{
		i = len;
		while (i-- > 0)
			ptr1[i] = ptr2[i];
	}
	else
	{
		while (++i < len)
			ptr1[i] = ptr2[i];
	}
	return (dst);
}
