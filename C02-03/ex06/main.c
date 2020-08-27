#include <stdio.h>
#include "ft_str_is_printable.c"

int main()
{
	char chaine_printable[] = "blablabla jfejfiwe fnfn";
	char chaine_2_printable[] = "blabla&^&*( #$ @";
	char chaine_non_printable[] = "blablaé";
	char chaine_vide[] = "";

	printf("Ma premiere chaine printable : %s - %d\n", chaine_printable, ft_str_is_printable(chaine_printable));
	printf("Ma deuxieme chaine printable : %s - %d\n", chaine_2_printable, ft_str_is_printable(chaine_2_printable));
	printf("Ma chaine non printable : %s - %d\n", chaine_non_printable, ft_str_is_printable(chaine_non_printable));
	printf("Ma chaine vide : %s - %d\n", chaine_vide, ft_str_is_printable(chaine_vide));

	return 0;
}

