/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:36:35 by ngordobi          #+#    #+#             */
/*   Updated: 2024/03/04 13:39:01 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *buff)
{
	int		read_bytes;
	char	*buffer;

	if (!buff)
		buff = ft_calloc(1, 1);
	buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	read_bytes = read(fd, buffer, BUFFER_SIZE);
	if (read_bytes <= 0)
		return (NULL);
	buff = ft_strjoin(buff, buffer);
	free(buffer);
	return (buff);
}

char	*line_stop(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] != '\n')
		line[i] = '\n';
	return (line);
}

char	*next_line(char *buffer)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	i++;
	j = 0;
	while (j <= i && buffer[i])
	{
		line[j] = buffer[i];
		i++;
		j++;
	}
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = line_stop(buffer);
	buffer = next_line(buffer);
	return (line);
}

int	main(void)
{
	int		fd;
	int		line_count;
	char	*line;

	line_count = 0;
	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	while (fd)
	{
		line = get_next_line(fd);
		if (line == NULL)
		{
			printf("NULL\n");
			break ;
		}
		line_count++;
		printf("[%d]: %s\n", line_count, line);
		free(line);
		line = NULL;
	}
	close(fd);
	return (0);
}