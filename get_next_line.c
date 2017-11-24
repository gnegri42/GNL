/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnegri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:40:11 by gnegri            #+#    #+#             */
/*   Updated: 2017/11/22 17:40:12 by gnegri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char	*str;
	int			i;
	char		buff[BUFF_SIZE + 1];
	int			ret;

	if (!str && (str = (char *)ft_memalloc(sizeof(char))) == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) != 0)
	{
		if (ret < 0 || fd < 0 || line == NULL)
			return (-1);
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
		if (!str)
			return (-1);
	}
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		*line = ft_strsub(str, 0, i);
		str = &str[i + 1];
		return (1);
	}
	if (!*line)
		return (-1);
	return (0);
}
