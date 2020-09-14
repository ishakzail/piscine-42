#include <stdio.h>
#include <math.h>
#include "ft_sqrt.c"

int main()
{
	long i = 947654656;
	int val_ft_sqrt = 0;
	int val_sqrt = 0;
	
		val_ft_sqrt = ft_sqrt(i);
		val_sqrt = sqrt(i);
			printf("La valeur de ma racine carree de %ld : %d et la vraie fct donne %d\n", i, val_ft_sqrt, val_sqrt);

		return (0);
}
