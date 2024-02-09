/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:15:13 by ngordobi          #+#    #+#             */
/*   Updated: 2024/02/09 14:12:28 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putstr(char *str, int count)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		count = ft_putchar(str[i], count);
		i++;
	}
	return (count);
}
