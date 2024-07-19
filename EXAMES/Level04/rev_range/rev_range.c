#include <stdio.h>
#include <stdlib.h>

int abs(int n)
{
	if (n < 0)
		return (-n);
	return n;
}

int *ft_rev_range(int start, int end)
{
	int *rrange;
	int len;
	if (start > end)
	{
		len = (start - end) + 1;
	}
	else if (start <= end)
	{
		len = (end - start) + 1;
	}
	rrange = (int *) malloc(len * sizeof(int));
	int i = 0;
	while (i < len)
	{
		rrange[i] = end;
		if (end >= start)
		{
			end--;
		}
		else if (end < start)
		{
			end++;
		}
		i++;
	}
	return rrange;
}

int main()
{
	int start = 0;
	int end = -3;
	int *rrange;
	int len;

	len = abs(start - end) + 1;
	rrange = ft_rev_range(start,end);
	int i = 0;
	while (len > i)
	{
		printf("%d ", rrange[i]);
		i++;
	}
}
