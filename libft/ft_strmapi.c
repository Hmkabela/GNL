/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:21:54 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/18 15:50:07 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ps;

	i = 0;
	if (!s || !f)
		return (0);
	ps = ft_strdup(s);
	if (!ps)
		return (0);
	while (ps[i] != '\0')
	{
		ps[i] = (*f)(i, ps[i]);
		i++;
	}
	return (ps);
}
