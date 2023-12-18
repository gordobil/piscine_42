/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:42:01 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/18 14:04:38 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isprint(unsigned char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

/*int	main(void)
{
	unsigned char	c = '=';

	printf("%d", ft_isprint(c));
	return (0);
}*/
