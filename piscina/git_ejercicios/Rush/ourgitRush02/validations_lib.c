/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations_lib.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:53:04 by ivanrodr          #+#    #+#             */
/*   Updated: 2023/10/28 22:11:25 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_num_arguments(int argc)
{
	if (argc == 2)
	{
		return (1);
	}
	else if (argc == 3)
	{
		return (2);
	}
	else
	{
		return (-1);
	}
}

int	ft_check_values(char **argv)
{
	int	cont;

	cont = 0;
	if (argv[2])
	{
		while (argv[2][cont] != '\0')
		{
			if (argv[2][cont] < 48 || argv[2][cont] > 57)
				return (-1);
			cont++;
		}
	}
	else
	{
		while (argv[1][cont] != '\0')
		{
			if (argv[1][cont] < 48 || argv[1][cont] > 57)
				return (-1);
			cont++;
		}
	}
	return (1);
}

int	ft_check_validations(int argc, char *argv[])
{
	int	result;

	result = 0;
	if (ft_check_num_arguments(argc) == 1)
	{
		result = ft_check_values(argv);
		if (result == -1)
			return (result);
		else
			printf("%s", "Viene un argumento y son numeros");
	}
	else if (ft_check_num_arguments(argc) == 2)
	{
		/* Validado el segundo parametro sean numeros, hay que validar que el primero sea un archivo */
		result = ft_check_values(argv);
		if (result == -1)
			return (result);
		else
			printf("%s", "Los dos argumentos bien, pasamos validaciones");
		/* printf("%i", result); */
	}
	else
		result = -1;
	return (result);
}
