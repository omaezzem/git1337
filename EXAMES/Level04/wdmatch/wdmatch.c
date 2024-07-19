/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:40:07 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:40:19 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        i++;
    }
    return i;
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len = 0;
    if (ac == 3)
    {
        while (av[1][i] != '\0')
        {
            while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j])
                {
                    len++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (len == ft_strlen(av[1]))
            ft_putstr(av[1]);
    }
    write (1, "\n", 1);
}
