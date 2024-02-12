/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:59:40 by ngordobi          #+#    #+#             */
/*   Updated: 2024/02/12 12:21:15 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *arg, ...);
int	ft_putchar(char c, int count);
int	ft_putstr(char *str, int count);
int	ft_putnbr(int n, int count);
int	ft_putunbr(unsigned int n, int count);
int	ft_puthex(unsigned long n, int count, char arg_format);
int	ft_putptr(unsigned long p, int count);

#endif
