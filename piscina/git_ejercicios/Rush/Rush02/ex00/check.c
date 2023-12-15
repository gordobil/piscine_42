/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:30:00 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/31 16:01:37 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] > '0' || argv[1][j] < '9')
			{
				if (argv[1][j] > 'A' || argv[1][j] < 'Z')
				{
					if (argv[1][j] > 'a' || argv[1][j] < 'z')
					{
						while (argv[2][i] != '\0')
						{
							if (argv[2][i] < '0' || argv[2][i] > '9')
							{
								return (-1);
								break;
							}
							i++;
						}
					}
				}
			}
			j++;
		}
		return (1);
	}
	else if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
				return (-1);
				break;
			i++;
		}
		return (1);
	}
	else
		return (-1);
}
