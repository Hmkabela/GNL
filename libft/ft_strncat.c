/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:15:26 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/20 16:27:44 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	id;
	size_t	is;

	id = ft_strlen(dst);
	is = 0;
	while ((src[is] != '\0') && (is < n))
		dst[id++] = src[is++];
	dst[id] = '\0';
	return (dst);
}
