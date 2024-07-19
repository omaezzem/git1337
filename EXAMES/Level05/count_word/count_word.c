/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:42:59 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/17 17:43:00 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int count_word(char *str)
{
	int i = 0;
	int len = 0;
	int isword = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			isword = 0;
		}
		else if (isword == 0)
		{
			isword = 1;
			len++;
		}
		i++;
	}
	return len;
}
