/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:17:13 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/15 12:28:34 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strnstr(char *haystack, char *needle, unsigned int len)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		while (*haystack == *needle && *needle != '\0')
		{
			return ((char *)haystack);
			haystack++;
			needle++;
		}
		haystack++;
	}
	return (0);
}

/*int	main(void)
{
	char	haystack[] = "hey, ke pasa ke";
	char	needle[] = "ke";

	printf("%c\n%p\n%c\n%p", *needle, needle, *ft_strnstr(haystack, needle, 20), ft_strnstr(haystack, needle, 20));
	return (0);
}*/
