/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:04:15 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/22 18:20:48 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush01(int	a, int	b, int	c, int	d, int	e, int	f, int	g, int	h, int tab[4][4])
{
	tab[1][0] = a;
	tab[1][3] = b;
	tab[2][0] = c;
	tab[2][3] = d;
	tab[0][1] = e;
	tab[3][1] = f;
	tab[0][2] = g;
	tab[3][2] = h;
}
void tab_dec(int	x, int	y)
{
	if (!(tab[0][y] || tab[3][y] || tab[x][0] || tab[x][3]))
	{
		
	}
}

void counter()
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			tab_dec(x, y);
		}
		x++;
	}
}




