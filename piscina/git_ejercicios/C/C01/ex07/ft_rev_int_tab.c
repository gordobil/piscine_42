/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:08:33 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/25 17:41:20 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	swap;

	i = 0;
	end = size - 1;
	while (i < size / 2)
	{
		swap = tab[end];
		tab[end] = tab[i];
		tab[i] = swap;
		i++;
		end--;
	}
}

int	main(void)
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int size = 6;
	int i;
	
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
