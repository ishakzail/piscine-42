#include "ft_div_mod.c"
#include <stdio.h>

int main()
{
	int a = 45;
	int b = 75;
	int *div = NULL;
	int *mod = NULL;

	div = &a;
	mod = &b;

	printf("La valeur de a est %d et de b est %d \n", a, b);
	printf("La division de a par b vaut %d et le reste est %d \n", a / b, a % b);
	printf("J'ai mis l'adresse de a dans div donc la valeur de l'int pointe est %d \n", *div);
	printf("J'ai mis l'adresse de b dans mod donc la valeur de l'int pointe est %d \n", *mod);

	ft_div_mod(a, b, div, mod);
	printf("J'applique la fonction \n");
	printf("La valeur de l'int pointe par div est maintenant %d \n", *div);
	printf("La valeur de l'int pointe par mod est maintenant %d \n", *mod);

	return 0;
}
