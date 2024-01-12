/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:59:11 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/12 17:24:15 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub_s;
	size_t		s_len;
	size_t		i;

	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub_s = malloc(len + 1);
	if (!sub_s || !s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (sub_s);
	i = 0;
	while (len--)
	{
		sub_s[i] = (char)s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
