/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 16:13:50 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/18 15:49:16 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		ps[i] = (*f)(ps[i]);
		i++;
	}
	return (ps);
}
