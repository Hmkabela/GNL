/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:49:09 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/28 16:37:51 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int		i;
	size_t	j;
	size_t	k;

	i = 0;
	if ((n[i] == '\0') && (h[i] == '\0'))
		return ((char *)h);
	while (h[i])
	{
		j = i;
		k = 0;
		if (n[k] == '\0')
			return ((char *)h + i);
		while (h[i] && n[k] && h[j] == n[k] && j < len)
		{
			j++;
			k++;
			if (n[k] == '\0')
				return ((char *)h + i);
		}
		i++;
	}
	return (NULL);
}
