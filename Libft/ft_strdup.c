/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:48:39 by mgrass            #+#    #+#             */
/*   Updated: 2019/09/09 10:59:49 by mgrass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dupl;

	dupl = (char *)malloc(sizeof(s1));
	if (dupl != NULL)
		ft_strcpy(dupl, s1);
	return (dupl);
}
