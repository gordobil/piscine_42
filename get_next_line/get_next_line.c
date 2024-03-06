/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:36:35 by ngordobi          #+#    #+#             */
/*   Updated: 2024/03/06 22:03:08 by ngordobi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "get_next_line.h"

char	*next_line(char *buffer)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
	{
		line[j] = buffer[i];
		i++;
		j++;
	}
	free(buffer);
	return (line);
}

char	*line_stop(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*ft_free(char *buff, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(buff, buffer);
	free(buff);
	return (temp);
}

char	*read_file(int fd, char *buff)
{
	int		read_bytes;
	char	*buffer;

	if (!buff)
		buff = ft_calloc(1, 1);
	buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		buff = ft_free(buff, buffer);
		if (ft_strrchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = line_stop(buffer);
	buffer = next_line(buffer);
	return (line);
}

/*int	main(void)
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
			break ;
		line_count++;
		printf("[%d]: %s\n", line_count, line);
		free(line);
		line = NULL;
	}
	printf("\nfd: %d", fd);
	close(fd);
	return (0);
}*/