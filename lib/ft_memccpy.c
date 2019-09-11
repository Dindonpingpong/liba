/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:52:25 by rkina             #+#    #+#             */
/*   Updated: 2019/09/11 13:53:42 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)dest;
	if (n == 0 || c == 0)
		return (dest);
	while (n-- > 0 && c-- > (int)n)
		*tmp++ = *(unsigned char *)src++;
	return (dest);
}
