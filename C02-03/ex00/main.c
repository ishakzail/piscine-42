#include <stdio.h>
#include "ft_strcpy.c"

int main()
{
	char chaine_source[] = "Bonjour!! Je teste ma fonction strcpy";
	char chaine_dest[100] = "djfsiwjrowjokweofjoefigigjsodfjafnjsabgufh fiif jdifj aodsjfojdfi";

	printf("Ma chaine source est %s\n", chaine_source);
	printf("Ma chaine destinataire est normalement %s\n", chaine_dest);
	printf("J'applique ma fonction!!\n");
	ft_strcpy(chaine_dest, chaine_source);
	printf("Ma nouvelle chaine destinaire est %s\n", chaine_dest);

	return 0;
}
