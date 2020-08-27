#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int main()
{
	int a_value = 48;
	int b_value = 13;
	int *a = &a_value;
	int *b = &b_value;

	printf("La valeur de l'int pointe par a est %d et de l'int pointe par b est %d \n", a_value, b_value);
	printf("J'applique la fonction.\n");
	ft_ultimate_div_mod(a, b);
	printf("Maintenant la valeur de l'int pointe par a est %d, correspondant a la division de la valeur de l'int pointe initialement par a, par l'int pointe initialement par b\n", *a);
	printf("Maintenant la valeur de l'int pointe par b est %d, correspondant au reste de la division de la valeur de l'int pointe initialement par a, par l'int pointe initialement par b\n", *b);

	return 0;
}
