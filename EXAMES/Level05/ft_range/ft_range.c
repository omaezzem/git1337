/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:53:57 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/18 11:53:58 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int valide(int len)
{
	if (len < 0)
		return (-len);
	return len;
}

int     *ft_range(int start, int end)
{
	int *range;
	int len;
	int i;
	if (end >= start)
	{
		len = (end - start) + 1;
	}
	else if (start > end)
	{
		len = (start - end) + 1;
	}
	range = (int *) malloc(sizeof(int) * len); 
	i = 0;
	while (i < len)
	{
		range[i] = start;
		if (start > end)
		{
			start--;
		}
		else if (start <= end)
		{
			start++;
		}
		i++;
	}
	return range;
}

/*int main()
{
	int start = 0;
	int end = -3;
	int *ft;

	int len = valide(end - start) + 1;
	ft = ft_range(start, end);
	int i = 0;
	while (len > i)
	{
		printf("%d ", ft[i]);
		i++;
	}
}*/
