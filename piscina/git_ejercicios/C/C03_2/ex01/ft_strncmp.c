/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:18:25 by ngordobi          #+#    #+#             */
/*   Updated: 2023/11/01 11:58:16 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}

/*int	main(void)
{
	char	s1[] = "ei";
	char	s2[] = "hola";

	printf("%d", ft_strncmp(s1, s2, 5));
	return (0);
}*/
