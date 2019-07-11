/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:13:09 by hmkabela          #+#    #+#             */
/*   Updated: 2019/06/28 14:31:08 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		a *= -1;
		ft_putchar_fd('-', fd);
	}
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	a = (a % 10) + 48;
	ft_putchar_fd(a, fd);
}
