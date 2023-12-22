/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:19:53 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/19 13:36:50 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;
	int			i;

	dst2 = (char *)dst;
	src2 = (const char *)src;
	i = 0;
	if (dst2 > src2)
	{
		while (len)
		{
			dst2[len] = src2[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "hola, buenas";
	char	dst[3];

	printf("%s", ft_memmove(dst, src, 4));
	return (0);
}*/
