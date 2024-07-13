/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:11:41 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/06 13:21:52 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j > i)
	{
		while (av[j][i] != '\0')
		{
			write (1, &av[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j--;
		i = 0;
	}
}
