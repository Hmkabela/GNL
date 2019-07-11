/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:31:45 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/24 15:51:02 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	size_t ih;
	size_t in;

	ih = 0;
	in = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[ih] != '\0')
	{
		while ((h[ih] == n[in]) && n[in] != '\0')
		{
			ih++;
			in++;
			if (in == ft_strlen(n))
				return ((char *)h + (ih - in));
		}
		if (h[ih] != n[in])
		{
			ih -= in;
			in = 0;
		}
		ih++;
	}
	return (NULL);
}
