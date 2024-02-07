/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:49:57 by ngordobi          #+#    #+#             */
/*   Updated: 2023/10/29 20:58:20 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (argc == 2)
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			while (argv[1][i] != '\0')
			{
				n = n * 10 + (argv[1][i] - '0');
				i++;
			}
			return (n);
		}
	}
	else if (argc == 3)
	{
		if (argv[2][i] >= '0' && argv[2][i] <= '9')
		{
			while (argv[2][i] != '\0')
			{
				n = n * 10 + (argv[2][i] - '0');
				i++;
			}
			return (n);
		}
	}
	return (-1);
}
