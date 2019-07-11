/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:22:40 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/25 13:26:20 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*ps;
	char		*pd;
	size_t		i;

	if (!dst && !src)
		return (0);
	i = 0;
	ps = (const char *)src;
	pd = (char *)dst;
	if (dst <= src)
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	else
		while (n-- > 0)
			(pd[n] = ps[n]);
	return (dst);
}
