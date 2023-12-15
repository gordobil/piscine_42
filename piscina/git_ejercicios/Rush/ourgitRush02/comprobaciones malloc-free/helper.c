/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperiago <jperiago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:22:39 by mliarte-          #+#    #+#             */
/*   Updated: 2023/10/29 17:56:10 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_equal(char x[], int i, char args[], int error)
{
	if (args[i] != x[i] && error != 1)
	{
		write(2, "Error imput not equal\n", 21);
		error = 1;
	}
	return (error);
}

// Print center
int	print(char args[])
{
	char	**x;
	int		i;
	int		error;

	error = 0;
	x = (char **)malloc(16);
//	free(x);
	i = 0;

	while (i < 4)
	{
		x[i] = (char *)malloc(16);
		i++;
	}
	x[0] = "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n";
	x[1] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	i = 0;
	while (i < 32)
	{
		error = check_equal(x[1], i, args, error);
		i++;
	}
	if (error == 0)
	{
		write(1, x[0], 32);

	}
//	free(x);
	return (0);
}

int	check_lenght(int cont)//Función para chequear la longitud
{
	if (cont > 16)
	{
		write(2, "Error too many numbers", 22);
		write(2, "\n", 1);
		return (1);
	}
	else if (cont < 16)
	{
		write(2, "Error not enough numbers", 24);
		write(2, "\n", 1);
		return (1);
	}
	return (0);
}

int	check_number(char args, int cont)
{
	int	current;

	if (args != ' ')
	{
		current = (args - '0');
		current += 48;
		if (current >= 49 && current <= 52)
			cont++;
		else
			return (-1);
	}
	return (cont);
}

int	check_inputs(char args[])
{
	int	error;
	int	cont[2];
	int	cont2;

	cont[0] = 0;
	cont2 = 0;
	while (args[cont[0]] != '\0')
	{
		cont2 = check_number(args[cont[0]], cont2);
		if (cont2 < 0)
			return (1);
		cont[0]++;
	}
	error = check_lenght(cont2);
	if (error == 0)
	{
		print(args);
//		free(args);
	}
//	free(args);
	return (0);
}
