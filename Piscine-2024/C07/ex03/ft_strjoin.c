#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i])
			total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
		i++;
	}
	return (total_length);
}

void	concatenate_strings(char *result, int size, char **strs, char *sep)
{
	int	i;

	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (strs[i])
			ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*result;

	if (size <= 0)
	{
		result = (void *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_length = calculate_total_length(size, strs, sep);
	result = (char *)malloc(total_length + 1);
	if (!result)
		return (NULL);
	concatenate_strings(result, size, strs, sep);
	return (result);
}
int	main(void)
{
	char *strs[] = {"hello", "world", "42"};
	char *sep = "   ||          ";
	int size = 3;

	char *result = ft_strjoin(size, strs, sep);

	printf("%s\n", result);

	free(result);
	return (0);
}