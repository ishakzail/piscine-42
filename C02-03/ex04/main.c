#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main()
{
	char chaine_lower[] = "bienvenuechezmoi";
	char chaine_lower_with_space[] = "bienvenue chez moi";
	char chaine_upper[] = "Bienvenue les amis";
	char chaine_vide[] = "";

	printf("Ma chaine minuscule : %s - %d\n", chaine_lower, ft_str_is_lowercase(chaine_lower));
	printf("Ma chaine minuscule avec espace : %s - %d\n", chaine_lower_with_space, ft_str_is_lowercase(chaine_lower_with_space));
	printf("Ma chaine majuscule : %s - %d\n", chaine_upper, ft_str_is_lowercase(chaine_upper));
	printf("Ma chaine vide : %s - %d\n", chaine_vide, ft_str_is_lowercase(chaine_vide));

	return 0;
}
