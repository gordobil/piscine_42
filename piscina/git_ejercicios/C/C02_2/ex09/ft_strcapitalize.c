/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:37:41 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/25 17:12:14 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if (!(str[i - 1] >= 97 && str[i - 1] <= 122))
			if (!(str[i - 1] >= 65 && str[i - 1] <= 90))
				if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
					if (str[i] >= 97 && str[i] <= 122)
						str[i] -= 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "ala hbHKj-kbhs+ksdd HKKkl:dfiaf";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
