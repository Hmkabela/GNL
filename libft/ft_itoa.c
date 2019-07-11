/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:27:36 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/25 13:18:34 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lies(char *str, int cc, int a, long num)
{
	while (cc > a)
	{
		str[--cc] = (num % 10) + 48;
		num /= 10;
	}
}

static long	ft_cs(long num)
{
	return ((num < 0) ? (num *= -1) : num);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		cc;
	int		a;

	num = ft_cs((long)n);
	cc = ft_cc(num);
	num = (long)n;
	if (n >= 0)
	{
		if (!(str = ft_strnew(cc)))
			return (NULL);
		a = 0;
	}
	else
	{
		if (!(str = ft_strnew(++cc)))
			return (NULL);
		a = 1;
		num *= -1;
		str[0] = '-';
	}
	ft_lies(str, cc, a, num);
	return (str);
}
