#include <stdio.h>
#include "ft_is_prime.c"

int main()
{
	int i = 2147483629;
	if(ft_is_prime(i))
	{
		printf("%d est premier\n", i);
	}
	return (0);
}
