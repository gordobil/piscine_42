/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:47 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/18 15:09:35 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a2, char b2, char c2, char d2)
{
	write (1, &a2, 1);
	write (1, &b2, 1);
	write (1, " ", 1);
	write (1, &c2, 1);
	write (1, &d2, 1);
	if (! (a2 == '9' && b2 == '8'))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	n[4];

	n[0] = '0';
	while (n[0] <= '9')
	{
		n[1] = '0';
		while (n[1] <= '9')
		{
			n[2] = n[0];
			while (n[2] <= '9')
			{
				n[3] = n[1] + 1;
				while (n[3] <= '9')
				{
					print(n[0], n[1], n[2], n[3]);
					n[3]++;
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
