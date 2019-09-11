/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:21:10 by rkina             #+#    #+#             */
/*   Updated: 2019/09/10 22:51:22 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	while (n-- > 0)
		*tmp++ = *(unsigned char *)src++;
	return (dest);
}
