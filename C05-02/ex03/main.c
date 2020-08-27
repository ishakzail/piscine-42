#include <stdio.h>
#include "ft_recursive_power.c"
#include "math.h"

int main()
{
	int i = -1;
	while (i < 10)
	{
		printf("ft_it_p : %d - math.h : %f\n", ft_recursive_power(3, i), pow(3, i));
		i++;
	}
	return (0);
}
