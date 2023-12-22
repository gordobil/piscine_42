/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:21:24 by ivanrodr          #+#    #+#             */
/*   Updated: 2023/10/28 23:34:58 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

int	ft_check_file(char *argv[])
{
	char *filename;
	int	fd;

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (-1);
}


