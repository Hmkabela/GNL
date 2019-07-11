/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 15:36:35 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/18 15:23:31 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = ft_memalloc(size + 1);
	i = 0;
	if (s == NULL)
		return (NULL);
	while (i <= size)
		s[i++] = '\0';
	return (s);
}
