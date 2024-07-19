/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:43:52 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:43:55 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *tofind)
{
	int i;
	int j;

	i = 0;
	if (tofind[0] == '\0')
	{
		return str;
	}
	while (str[i])
	{
		j = 0;
		while (tofind[j] == str[i + j])
		{
			if (tofind[j + 1] == '\0')
				return (&str[i]);
			else
				j++;
		}
		i++;
	}
	return NULL;
}
