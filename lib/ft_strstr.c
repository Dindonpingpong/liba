/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkina <rkina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:38:41 by rkina             #+#    #+#             */
/*   Updated: 2019/09/11 13:18:50 by rkina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *hastack, const char *needle)
{
	int	i;
	int j;

	i = 0;
	if (*needle == '\0')
		return ((char*)hastack);
	while (hastack[i])
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
