/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:46:46 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/19 13:43:18 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim_set(const char	*set, int len)
{
	char	*set2;
	int		i;
	int		j;
	int		x;

	set2 = malloc(len);
	i = 0;
	x = 0;
	while (set[i] != '\0')
	{
		j = 0;
		while (set2[j] != '\0')
		{
			if (set[i] != set2[j])
			{
				set2[x] == set[i];
				x++;
			}
			j++;
		}
		i++;
	}
	return (set2);
}

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
				start++;
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
				end--;
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
//	char	*s2;
//	int		i;

	set = trim_set(set, strlen(set));
	start = trim_start(s1, set);
	end = trim_end(s1, set, ft_strlen(s1));
	printf("start: %d\nend: %d", start, end);
	return (0);
}

int	main(void)
{
	const char	s1[] = "oppppoooperlskaooossvndspppoopopo";
	const char	set[] = "oppoo";

	ft_strtrim(s1, set);
	return (0);
}
