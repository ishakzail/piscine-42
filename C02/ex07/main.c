#include <stdio.h>
#include "ft_strupcase.c"

int main()
{
	char chaine_maj_et_minuscule[] = "JeMe TTlesLETRes E m MAKSukcile";	

	printf("Ma premiere chaine : %s\n", chaine_maj_et_minuscule);
	printf("Je passe ma fonction en parametre : %s\n", ft_strupcase(chaine_maj_et_minuscule));
	printf("Est-ce que ma chaine initiale est bien modifie ? %s\n", chaine_maj_et_minuscule);

	return (0);
}
