/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:57:26 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/17 14:08:47 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		end;
	long	nb;

	len = nlen(n);
	s = malloc((len + 1) * sizeof(char));
	end = len;
	len--;
	nb = n;
	if (s == NULL)
		return (NULL);
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	if (nb >= 0)
	{
		while (len != 0)
		{
			s[len] = (nb % 10) + '0';
			len--;
			nb = nb / 10;
		}
	}
	if (s[0] != '-')
		s[len] = nb + '0';
	s[end] = '\0';
	return (s);
}

/*int	main(void)
{
	printf("------------------------\n%s", ft_itoa(-2147483648));
	return (0);
}*/
