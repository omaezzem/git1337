/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:28:57 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/18 11:29:38 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(long nb)
{
    int len = 0;
    if (nb < 0)
    {
        nb *= -1;
        len++;
    }
    while (nb > 0)
    {
        nb /= 10;
        len++;
    }
    return len;
}

char	*ft_itoa(int nbr)
{
    char *itoa;
    int len = ft_strlen(nbr);
    int long nb;
    nb = nbr;
    itoa = (char *) malloc(len * sizeof(char) + 1);
    if (!itoa)
    {
        return 0;
    }
    itoa[len] = '\0';
    len--;
    if (nb == 0)
	{
		itoa[0] = 48;
		return(itoa);
	}
    if (nb < 0)
    {
        itoa[0] = '-';
        nb *= -1;
    }
    while (nb > 0)
    {
        itoa[len] = 48 + (nb % 10);
        nb /= 10;
        len--;
    }
    return itoa;
}
int main()
{
    printf("%s", ft_itoa(-2147483648)); 
}
