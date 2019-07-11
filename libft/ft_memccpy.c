/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:03:42 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 13:52:18 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	*pd;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	ps = (unsigned char *)src;
	pd = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
		{
			pd[i] = ps[i];
			i++;
			return (dst + i);
		}
		pd[i] = ps[i];
		i++;
	}
	return (NULL);
}
