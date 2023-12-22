/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_lib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperiago <jperiago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:45:43 by jperiago          #+#    #+#             */
/*   Updated: 2023/10/29 12:08:01 by jperiago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

int	ft_get_file(const char *str)
{
	int	fd; 

	fd = open(str, O_RDONLY);
	return (fd);
}

int	ft_read_file(const char str)
{
	
}
