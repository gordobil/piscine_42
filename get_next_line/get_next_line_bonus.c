/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:28:39 by ngordobi          #+#    #+#             */
/*   Updated: 2024/03/11 13:28:39 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*save_line(char	*buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] != '\0' && buffer[i] == '\n')
		line[i] = '\n';
	else
		line[i] = '\0';
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
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	temp_buff = ft_calloc((ft_strlen(buffer) - i++), sizeof(char));
	if (!temp_buff)
	{
		free(temp_buff);
		return (NULL);
	}
	j = 0;
	while (buffer[i] != '\0')
		temp_buff[j++] = buffer[i++];
	temp_buff[j] = '\0';
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
	int		read_chars;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	temp_buff = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!temp_buff)
		return (NULL);
	read_chars = 1;
	while (read_chars != 0 && ft_strchr(buffer, '\n') == NULL)
	{
		read_chars = read(fd, temp_buff, BUFFER_SIZE);
		if (read_chars < 0)
		{
			free(temp_buff);
			return (free(buffer), NULL);
		}
		temp_buff[read_chars] = '\0';
		buffer = append(buffer, temp_buff);
	}
	free(temp_buff);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_text(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = save_line(buffer[fd]);
	buffer[fd] = buffer_update(buffer[fd]);
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
		printf("[Linea numero %d] %s", count, line);
		count++;
		free(line);
		line = NULL;
	}
	close(fd);
	return (0);
} */
