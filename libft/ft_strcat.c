/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:13:17 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 14:23:18 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int		id;
	int		is;

	id = ft_strlen(dst);
	is = 0;
	while (src[is] != '\0')
		dst[id++] = src[is++];
	dst[id] = '\0';
	return (dst);
}
