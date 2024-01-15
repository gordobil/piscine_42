/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:59:11 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/15 13:59:14 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*sub_s;
	size_t		i;

	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	sub_s = malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return ("");
	i = 0;
	while (i < len)
	{
		sub_s[i] = (char)s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

/*int	main(void)
{
	char	s[] = "hola";

	printf("%s", ft_substr(s, 2, 5));
	return (0);
}*/
