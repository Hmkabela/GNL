/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:49:32 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/28 14:14:02 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (((a[i] != '\0') || (b[i] != '\0')) && (n > i))
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
