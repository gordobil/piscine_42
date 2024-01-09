/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:15:12 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/09 12:19:54 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*a1;
	const char	*a2;

	a1 = (const char *)s1;
	a2 = (const char *)s2;
	if (n == 0)
		return (0);
	while ((n > 0) && (*a1 == *a2) && (*a1 != '\0') && (*a2 != '\0'))
	{
		a1++;
		a2++;
		n--;
	}
	return (*a1 - *a2);
}

/*int	main(void)
{
	char	s1[] = "hola ke";
	char	s2[] = "hola kz";

	printf("%d", ft_memcmp(s1, s2, 10));
	return (0);
}*/
