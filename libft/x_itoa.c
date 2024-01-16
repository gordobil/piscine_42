/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:57:26 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/16 13:55:43 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nlen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n/10;
		i++;
	}
	return (i);
}

char	negative(int n)
{
	if (n < 0)
		return ('-');
	return ;
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	char	sign;

	sign = negative(n);
	if (sign != '-')
	{
		len = nlen(n) + 1;
		s = malloc(len);
	}
	else
	{
		n = n * -1;
		len = nlen(n) + 2;
		s = malloc(len);
		s[0] = '-';
		s++;
		n = n * -1;
	}
	if (n >= 10)
		while (s++)
		{
			n
			s = 
		}
	else
		s = n + '0';
	}
}
