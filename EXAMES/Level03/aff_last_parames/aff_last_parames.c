/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_parames.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:42:27 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:42:29 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = ac - 1;
	if (j > 1)
	{
		while (av[j][i] != '\0')
		{
			write (1, &av[j][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
