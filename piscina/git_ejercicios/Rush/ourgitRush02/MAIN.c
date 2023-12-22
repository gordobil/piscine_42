/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:54:15 by ivanrodr          #+#    #+#             */
/*   Updated: 2023/10/28 22:24:10 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validations_lib.h"
#include "atoi_lib.h"
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	/* (void)argc;
	(void)argv; */

	// FUNCIONAMIENTO ATOI
	/* int	a;

	a = ft_atoi(argv);
	printf("%d", a);
	if (a < 0)
	{
		write(1, "Error\n", 6);
		return (0);
	} */

	// VALIDACIONES
	printf("%i\n", ft_check_validations(argc, argv));
	return (0);
}
