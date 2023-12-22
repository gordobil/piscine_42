/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:42:01 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/15 15:37:46 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(unsigned char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/*int	main(void)
{
	unsigned char	c = '=';

	printf("%d", ft_isdigit(c));
	return (0);
}*/
