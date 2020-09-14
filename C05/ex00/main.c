#include "ft_iterative_factorial.c"
#include <stdio.h>

int main()
{
	int i = -1;
	while (i <= 10)
	{
		printf("%d\n", ft_iterative_factorial(i));
		i++;
	}
	return 0;
}
