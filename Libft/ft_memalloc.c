/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:14:45 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/10 17:52:13 by mgrass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(sizeof(size + 1));
	if (ptr == NULL)
		return (NULL);
	if (size)
	{
		while (size > i)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}
