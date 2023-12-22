/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:53:32 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/16 17:30:50 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char a1, char a2, char b1, char b2)
{
	write (1, &a1, 1);
	write (1, &a2, 1);
	write (1, " ", 1);
	write (1, &b1, 1);
	write (1, &b2, 1);
}

void	ft_print_comb2(void)
{
	int x1;
	int x2;
	int y1;
	int y2;

	x1 = '0';
	x2 = '0';
	y1 = '0';
	y2 = '1';
	while (x1 <= '9')
	{
		while (x2 <= '9')
		{
			while (y1 <= '9')
			{

				if ((x1 == y1) && (x2 == y2))
				{
					y2++;
					print(x1, x2, y1, y2);
				}
				else
				{
					print(x1, x2, y1, y2);
					y2++;
				}
				y1++;
			}
			x2++;
		}
		x1++;
	}
}
