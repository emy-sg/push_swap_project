/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:24:42 by isghioua          #+#    #+#             */
/*   Updated: 2021/09/12 16:03:13 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	copy_and_past(char **p, char *s)
{
	free(*p);
	*p = s;
}

int	ft_new_line(int count, char **p, char **line)
{
	int		j;
	char	*buf;

	j = 0;
	if (count < 0)
		return (-1);
	while ((*p)[j] != '\0' && (*p)[j] != '\n')
		j++;
	*line = malloc(j + 1);
	if (!(*line))
		return (-1);
	ft_strlcpy(*line, (*p), j);
	buf = *p;
	(*p) = ft_strdup((*p) + j);
	free(buf);
	return (0);
}

int	free_ptr(char **p)
{
	free(*p);
	(*p) = NULL;
	return (0);
}

int	get_next_line(int fd, char **line)
{
	int			read_buf;
	static char	*static_buf;
	char		*buf;

	if (!static_buf)
		static_buf = ft_strdup("");
	buf = malloc(1000 + 1);
	if (!buf)
		return (-1);
	while ((!ft_strchr(static_buf, '\n')))
	{
		read_buf = read(fd, buf, 1000);
		if (read_buf <= 0)
			break ;
		buf[read_buf] = '\0';
		copy_and_past(&static_buf, ft_strjoin(static_buf, buf));
	}
	free(buf);
	if (ft_new_line(read_buf, &static_buf, line) < 0)
		return (-1);
	if (static_buf[0] == '\0')
		return (free_ptr(&static_buf));
	else
		copy_and_past(&static_buf, ft_strdup(static_buf + 1));
	return (1);
}
