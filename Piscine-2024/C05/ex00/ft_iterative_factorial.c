/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:27:44 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/06 21:28:26 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	i = 1;
	fac = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb >= i)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}
