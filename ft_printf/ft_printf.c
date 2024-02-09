/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:07:18 by ngordobi          #+#    #+#             */
/*   Updated: 2024/02/09 14:32:52 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(va_list lst, const char *arg, int count)
{
	if (*arg == 'c')
		count = ft_putchar(va_arg(lst, int), count);
	else if (*arg == 's')
		count = ft_putstr(va_arg(lst, char *), count);
//	else if (*first_arg == 'p')
	else if (*arg == 'd' || *arg == 'i')
		count = ft_putnbr(va_arg(lst, int), count);
//	else if (*first_arg == 'u')
//	else if (*first_arg == 'x')
//	else if (*first_arg == 'X')
	else if (*arg == '%')
		count = ft_putchar('%', count);
//	printf(": %d\n", count);
	return (count);
}

int	ft_printf(const char *first_arg, ...)
{
	va_list	list;
	int count;

	va_start(list, first_arg);
	count = 0;
	while (*first_arg)
	{
		if (*first_arg != '%')
			count = ft_putchar(*first_arg, count);
		else
		{
			first_arg++;
			count = format(list, first_arg, count);
		}
		first_arg++;
	}
	va_end(list);
	return (count);
}

/*int	main(void)
{
	int		n = -145;
	char	c = 'c';
	char	*s = "hola";

	printf("final count: %d\n", ft_printf("%d %c %s %%, agur\n", n, c, s));
	return (0);
}*/
