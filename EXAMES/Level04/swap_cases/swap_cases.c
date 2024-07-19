/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:41:27 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:41:28 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>


char *swap_cases(char *str) 
{
  int i = 0;

  while (str[i])
  {
    	if (str[i] >= 'a' && str[i] <= 'z')
   	{
      		str[i] = str[i] - 32;
    	}
    	else if (str[i] >= 'A' && str[i] <= 'Z') 
	{
      		str[i] = str[i] + 32;
    	}
    	i++;
  }
  return str;
}
