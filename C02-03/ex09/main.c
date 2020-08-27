#include <stdio.h>
#include "ft_strcapitalize.c"

int main()
{
	char chaine_a_tester[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("La chaine initiale : %s\n", chaine_a_tester);
	printf("La chaine passee a la fonction : %s\n", ft_strcapitalize(chaine_a_tester));
	printf("La chaine initiale est-elle modifie ? %s\n", chaine_a_tester);

	return 0;
}
