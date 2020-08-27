#include "ft_strlen.c"
#include <stdio.h>

int main()
{
	char texte[] = "P";
	int nb_char = ft_strlen(texte);

	printf("La chaine de caracteres a evaluer est %s\n", texte);
	printf("Le nombre de caracteres est %d\n", nb_char);

	return 0;
}
