/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatas-b <smatas-b@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:28:13 by smatas-b          #+#    #+#             */
/*   Updated: 2023/10/15 19:34:18 by smatas-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	letras(int f_columna, char inicial, char mid, char end)
{
	int	columna;

	columna = 1;
	while (columna <= f_columna)
	{
		if (columna == 1)
			ft_putchar(inicial);
		else if (columna == f_columna)
			ft_putchar(end);
		else
			ft_putchar(mid);
		columna++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	fila;

	fila = 1;
	while (fila <= y)
	{
		if (fila == 1)
			letras (x, 'A', 'B', 'C');
		else if (fila == y)
			letras (x, 'C', 'B', 'A');
		else
			letras (x, 'B', ' ', 'B');
		fila++;
	}
}
