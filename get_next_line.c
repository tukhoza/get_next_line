/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 11:44:02 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/28 16:06:29 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			ft_line(char **string, char **line, int fd)
{
	char			*temp;
	int				i;

	i = 0;
	while (string[fd][i] != '\n' && string[fd][i] != '\0')
		i++;
	if (string[fd][i] == '\n')
	{
		*line = ft_strsub(string[fd], 0, i);
		temp = ft_strdup(string[fd] + i + 1);
		free(string[fd]);
		string[fd] = temp;
		if (string[fd][0] == '\0')
			ft_strdel(&string[fd]);
	}
	else if (string[fd][i] == '\0')
	{
		if (i == 0)
			return (0);
		*line = ft_strdup(string[fd]);
		ft_strdel(&string[fd]);
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static char		*str[255];
	char			buf[BUFF_SIZE + 1];
	char			*temp;
	int				result;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((result = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[result] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(0);
		temp = ft_strjoin(str[fd], buf);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (result < 0)
		return (-1);
	else if (result == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (ft_line(str, line, fd));
}
