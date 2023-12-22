/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:17:09 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/15 15:38:18 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcpy(char	*dst, char	*src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[dstsize - 1] = '\0';
	}
	return (i);
}

/*int	main(void)
{
	char	src[] = "hola";
	char	dst[] = "";

	printf("%d", ft_strlcpy(dst, src, 5));
	return (0);
}*/
