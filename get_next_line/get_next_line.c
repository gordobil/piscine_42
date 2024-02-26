/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:36:35 by ngordobi          #+#    #+#             */
/*   Updated: 2024/02/26 16:17:00 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*readtxt(int fd, char *text)
{
	char	*buffer;
	int		i;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (ft_find_c(text, '\n') == NULL)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i] = '\0';
		text = ft_strjoin(text, buffer);
	}
	free(buffer);
	return (text);
}

char	*get_next_line(int fd)
{
	static char	*text;
	char		*buffer;

	text = readtxt(fd, text);
	return (text);
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
