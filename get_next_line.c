/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:44:39 by hmkabela          #+#    #+#             */
/*   Updated: 2019/07/10 17:02:34 by hmkabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		ft_prep_n_cat(char **line, const int fd)
{
	char	*buff;
	char	*temp;
	int		retval;
	int		ret;

	ret = 0;
	if (*line == NULL)
		*line = ft_strnew(1);
	buff = ft_strnew(BUFF_SIZE + 1);
	if ((read(fd, buff, 0) < 0))
		return (-1);
	while ((retval = read(fd, buff, BUFF_SIZE) > 0))
	{
		temp = ft_strjoin(*line, buff);
		ft_strdel(&(*line));
		*line = temp;
		if (ft_strchr(buff, '\n'))
			break ;
		ft_strclr(buff);
		ret++;
	}
	ft_strdel(&buff);
	return ((retval > ret) ? retval : ret);
}

int				get_next_line(const int fd, char **line)
{
	static char *store[420];
	char		*temp;
	int			retval;

	temp = 0;
	retval = 1;
	if (read(fd, temp, 0) < 0 || fd < 0)
		return (-1);
	*line = 0;
	if (store[fd])
	{
		*line = store[fd];
		store[fd] = ft_strchr(*line, '\n');
	}
	if (!store[fd])
		retval = ft_prep_n_cat(line, fd);
	if ((store[fd] = ft_strchr(*line, '\n')))
	{
		store[fd] = ft_strdup(store[fd] + 1);
		ft_strclr(ft_strchr(*line, '\n'));
		temp = ft_strdup(*line);
		ft_strdel(&temp);
	}
	return ((retval > 0) ? 1 : retval);
}
