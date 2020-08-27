#include "ft_range.c"
#include <stdio.h>

int main()
{
	int min = -25;
	int max = 2147;
	int i = 0;
	int *table;

	table = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d -", table[i]);
		i++;
	}

	return (0);
}
