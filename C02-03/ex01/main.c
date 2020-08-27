#include <stdio.h>
#include "ft_strncpy.c"
#include <string.h>

int main()
{
	char chaine_source[] = "Bonjour!! Je teste ma fonction strncpy";
	char chaine_dest[100] = "djfsiwjrowjokweofjoefigigjsodfjafnjsabgufh fiif jdifj aodsjfojdfi";

	printf("Ma chaine source est %s\n", chaine_source);
	printf("Ma chaine destinataire est normalement %s\n", chaine_dest);
	printf("J'applique ma fonction!!\n");
	strncpy(chaine_dest, chaine_source, 5);
	printf("Ma nouvelle chaine destinaire est %s\n", chaine_dest);

	return 0;
}
