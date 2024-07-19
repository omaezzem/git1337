/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:43:07 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:52:24 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar (nb + '0');
}
		
int main()
{
	int max = 100;
	int i = 1;

	while (max >= i)
	{
		if ((i % 5 == 0 ) && (i % 3 == 0))
		{
			write (1, "fizzbuzz", 8);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else 
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
		
	}
}



