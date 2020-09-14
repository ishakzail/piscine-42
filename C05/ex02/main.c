#include <stdio.h>
#include "ft_iterative_power.c"
#include "math.h"

int main()
{
	int i = -1;
	while (i < 10)
	{
		printf("ft_it_p : %d - math.h : %f\n", ft_iterative_power(0, i), pow(0, i));
		i++;
	}
	return (0);
}
