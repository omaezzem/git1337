/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:13:11 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/18 10:31:11 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_rev_print (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
      i++;
    }
    i -= 1;
    while(i >= 0)
    {
      write (1, &str[i], 1);
      i--;
    }
    return str;
}
// int main()
// {
//    char ft[] = "omar";
//    ft_rev_print(ft);
// }