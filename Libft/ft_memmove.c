/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:16:32 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/09 18:49:17 by mgrass           ###   ########.fr       */
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
