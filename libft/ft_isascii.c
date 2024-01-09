/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:42:01 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/09 12:29:14 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(unsigned char c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

/*int	main(void)
{
	unsigned char	c = '=';

	printf("%d", ft_isascii(c));
	return (0);
}*/
