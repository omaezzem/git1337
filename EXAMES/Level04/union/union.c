/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:40:28 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:40:30 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    char ascci[256] = {0};

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (ascci[av[1][i]] == 0)
            {
                write (1, &av[1][i] , 1);
                ascci[av[1][i]] = 1;
            }
            i++;
        }
        j = 0;
        while (av[2][j])
        {
            if (ascci[av[2][j]] == 0)
            {
                write (1, &av[2][j] , 1);
                ascci[av[2][j]] = 1;
            }
            j++;
        }
    }
    write (1, "\n", 1);
}