/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:51:51 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/15 15:38:00 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		size--;
		i++;
	}
	while ((size > 0) && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
		i++;
	}
	*dest = '\0';
	return (i - 1);
}

/*int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "agur";

	printf("%d\n%s", ft_strlcat(dest, src, 6), dest);
	return (0);
}*/
