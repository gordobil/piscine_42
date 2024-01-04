/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:00:02 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/26 16:13:10 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' || c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

/*int	main(void)
{
	printf("%c",ft_toupper('b'));
	return (0);
}*/
