/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:40:41 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:40:44 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac , char **av)
{
    int i;
    int j;
    char ascii[256] = {0};

    if (ac == 3)
    {
        i = 0;
        while (av[1][i] != '\0')
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (ascii[av[1][i]] == 0)
                    {
                        write (1, &av[1][i], 1);
                        ascii[av[1][i]] = 1;

                    }
                    
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}