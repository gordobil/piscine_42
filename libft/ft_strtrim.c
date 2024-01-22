/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:46:46 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/22 13:41:26 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	trim_start(const char *s1, const char *set)
{
	int	start;
	int	stop;
	int	i;
	int	j;

	start = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		stop = start;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				start++;
				break ;
			}
			j++;
		}
		if (start == stop)
			break ;
		i++;
	}
	return (start);
}

int	trim_end(const char *s1, const char *set, int end)
{
	int	i;
	int	stop;

	end--;
	while (end != 0)
	{
		i = 0;
		stop = end;
		while (set[i] != '\0')
		{
			if (s1[end] == set[i])
			{
				end--;
				break ;
			}
			i++;
		}
		if (end == stop)
			break ;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*s2;
	int		i;

	start = trim_start(s1, set);
	end = trim_end(s1, set, ft_strlen(s1));
	s2 = malloc(((end - start) + 2) * sizeof(char));
	if (!s2 || !s1 || !set)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main(void)
{
	const char	s1[] = "oppppoooperlskaooossvndspppoopopo";
	const char	set[] = "oppoo";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
