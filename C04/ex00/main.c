#include <stdio.h>
#include "ft_strlen.c"

int main()
{
	char chaine_test[] = "";

	printf("La chaine de test est : %s\n", chaine_test);
	printf("Le nombre de caracteres est : %d\n", ft_strlen(chaine_test));

	return (0);
}

