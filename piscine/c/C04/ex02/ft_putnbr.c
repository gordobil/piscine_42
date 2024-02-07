/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:51 by ngordobi          #+#    #+#             */
/*   Updated: 2023/11/02 13:32:57 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	n_to_p(int n)
{
	char	c;

	c = '-';
	if (n < 0)
	{
		n = -n;
		write (1, &c, 1);
	}
	return (n);
}

int	digits(int n)
{
	int	dig;

	dig = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		dig++;
	}
	return (dig);
}

int	ten(int n)
{
	int	i;

	i = 1;
	while (n != 0)
	{
		i = i * 10;
		n--;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	dig;
	int	n;

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		nb = n_to_p(nb);
		dig = digits(nb);
		dig--;
		while (dig > 0)
		{
			n = (nb / ten(dig)) % 10 + '0';
			write (1, &n, 1);
			dig--;
		}
		n = nb % 10 + '0';
		write (1, &n, 1);
	}
}

int	main(void)
{
	ft_putnbr(-8a639);
	return (0);
}
