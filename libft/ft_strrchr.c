/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:27:31 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/10 12:46:51 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last_c = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last_c);
}

/*int main(void)
{
	const char	s[] = "hola, buenas";	

	printf("found: %s", ft_strrchr(s, 'a'));
	return (0);
}*/
