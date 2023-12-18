/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:42:01 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/18 13:59:49 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(unsigned char c)
{
	if (c < 1 || c > 177)
		return (0);
	return (1);
}

/*int	main(void)
{
	unsigned char	c = '=';

	printf("%d", ft_isascii(c));
	return (0);
}*/
