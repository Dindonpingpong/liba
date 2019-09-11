/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:32:47 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/10 17:48:29 by mgrass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(sizeof(size + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	if (size)
	{
		while (size > i)
		{
			ptr[i] = '\0';
			i++;
		}
	}
	return (ptr);
}
