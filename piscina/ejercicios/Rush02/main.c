/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:17:16 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/28 15:56:23 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush02lib.h"

int	main(int	argc, char	**argv)
{
	int	a;

	a = ft_atoi(argv);
	printf("%d", a);
	if (a < 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
