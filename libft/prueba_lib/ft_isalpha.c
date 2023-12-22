/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:54:46 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/19 12:32:57 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "plibft.h"

int	ft_isalpha(unsigned char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

/*int	main(void)
{
	unsigned char	str[] = "JGDSGho7la";

	printf("%d", ft_isalpha(str));
	return (0);
}*/
