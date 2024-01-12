/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:57:26 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/12 20:12:13 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	is_neg(int	n)
{
	if (n < 0)
		return ('-');
	return ();
}

char	*ft_itoa(int n)
{
	char	*s;
	char	sign;

	sign = is_neg(n);
}
