/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:18:20 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/30 15:51:40 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"

char	g_empty;
char	g_obstacle;
char	g_full;
int	g_row_num;
int	g_col_num;

int	first_row_check(char	*first_row)
{
	int	i;
	char	*row_num_s;

	while (first_row[i] != '\0')
	{
		if (first_row[i] >= '0' || first_row[i] <= '9')
		{
			row_num_s[i] = first_row[i];
		}
		else
		{
			g_empty = first_row[i];
			g_obstacle = first_row[i + 1];
			g_full = first_row[i + 2];
			break;
		}
		i++;
	}
	g_row_num = atoi(row_num_s);
	return ();
}

int	init_read(void)
{
	int	fd;
//	int	sz;
	int	i;
	char	*buffer;
	char	first_row[200];

	buffer = (char *)malloc(1);
	fd = open("sample", O_RDONLY);
	sz = read(fd, buffer, 10000000);
	i = 0;
	while (buffer[i] != '\n')
	{
		first_row[i] = buffer[i];
		i++;
	}
	first_row[i] = '\0';
	first_row_check(first_row);
	g_col_num = 0;
	while (buffer[i] != '\n')
	{
		i++;
		g_col_num++;
	}
	close(fd);
//	return (sz);
}
