/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:58:35 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/31 18:09:24 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "hola ke pasa? nose bueno";
	char to_find[] = "nose";
	int i;

	printf ("%p\n%p\n%c%c%c%c", ft_strstr(str, to_find), &str[14], str[14],
	str[15], str[16], str[17]);
	return(0);
}*/
