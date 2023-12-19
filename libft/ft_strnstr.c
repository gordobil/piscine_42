/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:17:13 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/19 12:26:18 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			return ((char *)haystack);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	haystack[] = "hey, ke pasa ke";
	char	needle[] = "ke";

	printf("%c\n%p\n%c\n%p", *needle, needle, *ft_strnstr(haystack, needle, 20),
		  ft_strnstr(haystack, needle, 20));
	return (0);
}*/
