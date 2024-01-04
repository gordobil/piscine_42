/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:00:02 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/26 16:15:57 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (c - 'A' + 'a');
	else
		return (c);
}

/*int	main(void)
{
	printf("%c",ft_tolower('B'));
	return (0);
}*/
