/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:17:09 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/10 14:26:04 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	unsigned int	i;
	int				c;

	if (!src)
		return (0);
	c = (unsigned int)ft_strlen(src);
	if (!size)
		return (c);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}

/*int	main(void)
{
	char	src[] = "hola";
	char	dst[] = "";

	printf("%d", ft_strlcpy(dst, src, 5));
	return (0);
}*/
