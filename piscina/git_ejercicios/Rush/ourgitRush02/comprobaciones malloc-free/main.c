/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperiago <jperiago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:22:39 by mliarte-          #+#    #+#             */
/*   Updated: 2023/10/29 14:27:46 by mliarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Llamamos a la función check inputs
int	check_inputs(char args[]);


int	main(int argc, char **argv)
{
	int	error;

	error = 0;
	if (argc == 2)
	{
		error = check_inputs(argv[1]);
	}
	if (error != 0 || argc != 2)
	{
		write(2, "Error user input\n", 20);
	}
	return (0);
}
