#include <stdio.h>
#include "ft_find_next_prime.c"

int main()
{
	int i = 2147483600;
	
	printf("Le nombre premier apres %d est %d\n", i, ft_find_next_prime(i));
	return (0);
}
