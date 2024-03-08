/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:36:35 by ngordobi          #+#    #+#             */
/*   Updated: 2024/03/08 15:14:34 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char	*buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*buffer_update(char *buffer)
{
	char	*temp_buff;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (ft_strlen(buffer) == (unsigned long)i)
	{
		free(buffer);
		return (NULL);
	}
	temp_buff = ft_calloc((ft_strlen(buffer) - i++), sizeof(char));
	if (temp_buff == NULL)
		return (NULL);
	j = 0;
	while (buffer[i])
		temp_buff[j++] = buffer[i++];
	free (buffer);
	return (temp_buff);
}

char	*append(char *buffer, char *temp_buff)
{
	char	*temp;

	temp = ft_strjoin(buffer, temp_buff);
	free(buffer);
	return (temp);
}

char	*read_text(int fd, char *buffer)
{
	char	*temp_buff;
	int		read_bytes;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	temp_buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, temp_buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(temp_buff);
			return (NULL);
		}
		temp_buff[read_bytes] = '\0';
		buffer = append(buffer, temp_buff);
	}
	free(temp_buff);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_text(fd, buffer);
	if (!buffer)
		return (NULL);
	line = get_line(buffer);
	buffer = buffer_update(buffer);
	return (line);
}

/* int	main(void)
{
	char	*line;
	int		fd;
	int		count;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	count = 1;
	while (fd)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("[%d] %s", count, line);
		count++;
		free(line);
		line = NULL;
	}
	printf("\nfd: %d", fd);
	close(fd);
	return (0);
} */
