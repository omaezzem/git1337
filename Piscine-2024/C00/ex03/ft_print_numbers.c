/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:11:37 by omaezzem          #+#    #+#             */
/*   Updated: 2024/06/26 10:15:59 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	start;
	char	end;

	start = '0';
	end = '9';
	while (start <= end)
	{
		write (1, &start, 1);
		start++;
	}
}
