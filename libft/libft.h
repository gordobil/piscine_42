/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:59:40 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/09 14:13:10 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int				ft_atoi(char *str);
int				ft_isalpha(unsigned char c);
int				ft_isdigit(unsigned char c);
int				ft_isalnum(unsigned char c);
int				ft_isascii(unsigned char c);
int				ft_isprint(unsigned char c);
size_t			ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
unsigned int	ft_strlcpy(char	*dst, char	*src, unsigned int dstsize);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strnstr(char *haystack, char *needle, unsigned int len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);

#endif
