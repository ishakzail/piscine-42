#include "ft_strlowcase.c"
#include <stdio.h>

int main()
{
	char chaine_majuscule[] = "supeR chainEMakdieK kdsls M";

	printf("Ma chaine initiale : %s\n", chaine_majuscule);
	printf("Ma chaine modifie via l'appel de ma fonction : %s\n", ft_strlowcase(chaine_majuscule));
	printf("Ma chaine initiale : %s\n", chaine_majuscule);

	return 0;
}
