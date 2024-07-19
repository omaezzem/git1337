/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:40:36 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 21:12:40 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char rev;
    
    while (len > i)
    {
        rev = str[i];
        str[i] = str[len];
        str[len] = rev;

        len--;
        i++;
    }
    return str;
}

// int main()
// {
//     char ft[] = "omar";
//     printf("%s", ft_strrev(ft));
// }