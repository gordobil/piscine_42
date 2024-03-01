/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:36:35 by ngordobi          #+#    #+#             */
/*   Updated: 2024/03/01 13:39:19 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*text;
	char		*buffer;
	int			i;

	i = 0;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	buffer = 0;
	while ((buffer[i] != '\n') && (buffer[i] != '\0') && (i < BUFFER_SIZE))
	{
		if (read(fd, &buffer[i], 1) < 0)
			return (NULL);
		i++;
	}
	if (buffer[i] == '\n' || buffer[i] == '\0')
	{
		buffer[i] = '\0';
		text = ft_strjoin(text, buffer);
	}
	else
	{
		text = ft_strjoin(text, buffer);
		text = get_next_line(fd);
	}
	return (buffer);
}

int	main(void)
{
	int		fd;
	char	*gnl;

	fd = open("text.txt", O_RDONLY);
	if(fd <0)
		printf("hola manola");
	gnl = get_next_line(fd);
	printf("%s", gnl);
	return (0);
}
