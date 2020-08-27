#include "ft_recursive_factorial.c"
#include <stdio.h>

int main()
{
	int i = -2;
	while (i <= 10)
	{
		printf("%d\n", ft_recursive_factorial(i));
		i++;
	}
	return 0;
}
