#include "ft_ft.c"
#include <stdio.h>

int main ()
{
	int *nbr = NULL;
	int vrai_nbr = 41;

	nbr = &vrai_nbr;

	ft_ft(nbr);
	printf("%d", vrai_nbr);

	return 0;
}
