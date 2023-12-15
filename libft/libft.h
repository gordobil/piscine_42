/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:59:40 by ngordobi          #+#    #+#             */
/*   Updated: 2023/12/15 12:53:46 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LIBFT
#ifdef LIBFT

int	ft_atoi(char *str);
int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_strlen(char *s);
unsigned int	ft_strlcpy(char	*dst, char	*src, unsigned int dstsize);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strnstr(char *haystack, char *needle, unsigned int len);

#endif
