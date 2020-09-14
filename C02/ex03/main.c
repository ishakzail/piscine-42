#include <stdio.h>
#include "ft_str_is_numeric.c"

int main()
{
	char chaine_de_nombre[] = "12354565132";
	char chaine_de_nombre_negatif[] = "-123";
	char chaine_de_mot[] = "bravo bonjour";
	char chaine_alpha_num[] = "123b5";
	char chaine_vide[] = "";

	printf("Ma chaine numerique : %s - %d\n", chaine_de_nombre, ft_str_is_numeric(chaine_de_nombre));
	printf("Ma chaine negative : %s - %d\n", chaine_de_nombre_negatif, ft_str_is_numeric(chaine_de_nombre_negatif));
	printf("Ma chaine de mots : %s - %d\n", chaine_de_mot, ft_str_is_numeric(chaine_de_mot));
	printf("Ma chaine alpha num : %s - %d\n", chaine_alpha_num, ft_str_is_numeric(chaine_alpha_num));
	printf("Ma chaine vide : %s - %d\n", chaine_vide, ft_str_is_numeric(chaine_vide));

	return 0;
}
