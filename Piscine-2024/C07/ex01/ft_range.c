/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:20 by omaezzem          #+#    #+#             */
/*   Updated: 2024/07/09 15:31:17 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (NULL);
	}
	result = (int *)malloc((sizeof(int) * (max - min)));
	if (result == NULL)
	{
		return (NULL);
	}
	i = min;
	while (i < max)
	{
		result[i - min] = i;
		i++;
	}
	return (result);
}
int	main()
{
	int	min = -2;
	int	max = 10;
	int i;
	int	*range = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return 0;
}
