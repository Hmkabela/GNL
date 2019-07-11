/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:17:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/14 14:16:48 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t dlen;

	dlen = ft_strlen(dst);
	if (n <= dlen)
		return (n + ft_strlen(src));
	ft_strncat(dst, src, n - dlen - 1);
	return (dlen + ft_strlen(src));
}
