/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:30:28 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/18 10:31:08 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	unsigned char	str[] = "hola35 26";
	int r;
	int	i;

	r = 0;
	i = 0;
	while (str[i] != '\0')
	{
		r = ft_isalnum(str[i]);
		if (r == 0)
			break;
		printf("%d %c\n", r, str[i]);
		i++;
	}
	printf("\n%d", r);
	return (0);
}
