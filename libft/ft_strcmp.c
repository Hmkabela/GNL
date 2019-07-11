/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:50:13 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/28 14:13:47 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while ((a[i] != '\0') || (b[i] != '\0'))
	{
		if (a[i] != b[i])
		{
			if (a[i] > b[i])
				return (1);
			if (a[i] < b[i])
				return (-1);
		}
		i++;
	}
	return (0);
}
