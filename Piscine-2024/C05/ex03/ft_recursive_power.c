/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:11:58 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/07 11:34:57 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        if (nb == 0)
        {
            return (1);
        }
        else
        {
            return (1);
        }
    }
    return (nb * ft_recursive_power(nb, power - 1));
}
