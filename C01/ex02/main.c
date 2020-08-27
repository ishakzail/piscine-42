#include "ft_swap.c"
#include <stdio.h>

int main()
{
	int a = 12;
	int b = 14;

	printf("La valeur de a est %d et de b est %d \n", a, b);
	ft_swap(&a, &b);
	printf("La nouvelle valeur de a est %d et de b est %d\n", a, b);

	return 0;
}
