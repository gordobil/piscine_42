/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:50:19 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/31 13:30:42 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	w_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (c == '\0' || s[i] == '\0')
		return (1);
	while (s[i] == c)
		i++;
	count = 0;
	if (s[i] != '\0')
		count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int	char_count(const char *s, char c, int word_c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		i++;
	}
	count = count + word_c;
	return (count);
}

int	w_len(const char *s, char c, int j)
{
	int	count;

	count = 0;
	if (c == '\0' || s[0] == '\0')
		return (1);	
	while (s[j] == c)
		j++;
	while (s[j] != c && s[j] != '\0')
	{
		count++;
		j++;
	}
	return (count);
}

int	w_start(const char *s, char c, int j, int word_l)
{
	j = j + word_l;
	while (s[j] == c)
		j++;
	return (j);
}

char	**ft_split(const char *s, char c)
{
	int		word_c;
	int		word_l;
	int		i;
	int		j;
	char	**matrix;

	if (!s)
		return (NULL);
	word_c = w_count(s, c);
	j = char_count(s, c, word_c);
	matrix = malloc(sizeof(char *) * j + 1);
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	word_l = 0;
	while (i < word_c)
	{
		j = w_start(s, c, j, word_l);
		word_l = w_len(s, c, j);
		matrix[i] = ft_substr(s, j, word_l);
		if (!matrix[i])
		{
			while (i-- >= 0)
				free(matrix[i]);
			break ;
		}
		printf("i = %d   j = %d   word length = %d   -->%s\n", i, j, word_l, matrix[i]);
		i++;
	}
	matrix[word_c] = NULL;
	printf("i = %d  -->%s\n", i, matrix[i]);
	return (matrix);
}

int	main(void)
{
	const char	s[] = "\0aa\0bbb";
	char		c = '\0';
	ft_split(s, c);
	return (0);
}
