/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:18:25 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/18 16:00:13 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ps;
	size_t	n;

	ps = ft_strnew(len);
	n = 0;
	if (!s || !ps)
		return (0);
	while (s[start] != '\0' && len-- > 0)
		ps[n++] = s[start++];
	ps[n + 1] = '\0';
	return (ps);
}
