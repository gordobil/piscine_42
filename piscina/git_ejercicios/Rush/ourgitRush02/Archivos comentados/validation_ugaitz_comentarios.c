/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_ugaitz.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaracha <bsaracha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:11:52 by umagureg          #+#    #+#             */
/*   Updated: 2023/10/28 17:42:31 by bsaracha         ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*	RECIBE UNO O DOS ARGUMENTOS */
void	ft_check_num_arguments(int argc, char **argv)
{	
	if (argc == 2) /*Compaamos si tenemos 1 argumento*/
	{
		write(1, "one", 3);/*Return one argument*/
	}	
	else if (argc == 3) /*Comparamos si tienemos 2 argumentos*/
	{
		write(1, "two", 3); /*Return two arguments*/
		ft_check_only_positive(); /* Para comprobacion*/
	}
	else /* En caso de recibir 0 o 3 validaciones */
	{
		return (0);
	}	
}

/* SOLAMENTE NUMEROS ENTEROS, SIN NUMEROS NEGATIVOS NI SIGNOS */
void	ft_check_only_positive_numbers(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0') /* El caracter no llega al final del array */
	{
		if (argv[1][i] < 48 || argv[1][i] > 57) // Ascii, menor que 0 o mayor que 9
		{
			write(1, "Error", 5); /* Muestra error en caso de que algun caracter del array no sea del 0 al 9 */
			write(1, "\n", 1);
			break;/* Terminamos el programa si sale error */
		}
		i++; /* Sumamos i en 1 para mirar el siguiente caracter del array */
	}
}

int	main(int argc, char **argv)
{
	ft_check_num_arguments(int argc, char **argv);
	ft_check_only_positive_numbers(argc, argv);
	return (0);
}
