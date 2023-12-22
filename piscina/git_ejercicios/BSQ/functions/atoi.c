/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:13:05 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/30 14:13:47 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	atoi(char *str)
{
	int i;
	long number;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}

	return (number);
}

/*int	main(void)
{
	char	number_str[] = "54364";
	printf("%d", atoi(number_str));

	return (0);
}*/
