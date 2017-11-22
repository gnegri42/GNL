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

int		get_next_line(const int fd, char **line)
{
	int			ret;
	char		buf[BUF_SIZE];
	char		*dup;
	static int	line_nbr;

	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		while (line[])
	}
}
