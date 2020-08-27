#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main()
{
	char chaine_lower[] = "bienvenuechezmoi";
	char chaine_upper[] = "BIENVENUECHEWMOI";
	char chaine_upper_with_space[] = "BIENVENUE LES AMIS";
	char chaine_vide[] = "";

	printf("Ma chaine minuscule : %s - %d\n", chaine_lower, ft_str_is_uppercase(chaine_lower));
	printf("Ma chaine majuscule : %s - %d\n", chaine_upper, ft_str_is_uppercase(chaine_upper));
	printf("Ma chaine majuscule avec espace : %s - %d\n", chaine_upper_with_space, ft_str_is_uppercase(chaine_upper_with_space));
	printf("Ma chaine vide : %s - %d\n", chaine_vide, ft_str_is_uppercase(chaine_vide));

	return 0;
}
