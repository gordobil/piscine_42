/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:35:47 by ngordobi          #+#    #+#             */
/*   Updated: 2024/02/26 15:40:45 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*s = "hola";
	char	c = 'a';
	char	*p;

	ft_putstr(s);
	p = find_c(s, c);
	printf("\n%s", p);
	return (0);
}
