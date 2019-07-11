/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:11:46 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/17 14:14:14 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	ib;
	size_t	ie;
	size_t	i;
	char	*ps;

	if (!s)
		return (0);
	i = 0;
	ib = 0;
	ie = ft_strlen(s) - 1;
	if (ft_strlen(s) == 0)
		return ((char *)s);
	while ((s[ie] == 32 || s[ie] == '\t' || s[ie] == '\n') && ie != 0)
		ie--;
	while ((s[ib] == 32 || s[ib] == '\t' || s[ib] == '\n') && s[ib] != '\0')
		ib++;
	if (ib > ie)
		return (ft_strdup(""));
	ps = ft_strnew((ie - ib) + 1);
	if (!ps)
		return (0);
	while (ib <= ie)
		ps[i++] = s[ib++];
	return (ps);
}
