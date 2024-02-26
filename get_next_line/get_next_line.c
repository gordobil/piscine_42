/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:36:35 by ngordobi          #+#    #+#             */
/*   Updated: 2024/02/26 14:22:54 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*readtxt(int fd, int text)
{
	char	*buff;
	int		i;

	i = 0;
	while ()
	{
		i = read(fd, buff, BUFFER_SIZE);

	}
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		line;

	if (fd < 0)
		return (NULL);
	readtxt(fd);
//	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
}

int	main(void)
{
	int		fd;
	char	*gnl;

	fd = open("texto.txt", O_RDONLY);
	gnl = get_next_line(fd);
	ft_putstr(gnl);
	return (0);
}
