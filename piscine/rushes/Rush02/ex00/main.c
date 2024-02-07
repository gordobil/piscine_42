/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:41:34 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/29 21:14:44 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "r02lib.h"

int	main(int argc, char **argv)
{
	int	n;

	if (check(argc, argv) != 1)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	else
	{
		n = atoi(argc, argv);
		if (n < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	printf("%d", n);
	return (0);
}
