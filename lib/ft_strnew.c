/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:32:47 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/21 19:18:07 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dst;

	if (size + 1 < size)
		return (0);
	if (!(dst = ft_memalloc(size + 1)))
		return (0);
	while (*dst)
		ft_memset(dst, 0, size + 1);
	return (dst);
}
