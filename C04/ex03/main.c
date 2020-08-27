#include <stdio.h>
#include "ft_atoi.c"
#include <stdlib.h>

int main()
{
	char chaine_nombre[] = "\n-2147483649";

	printf("%d", atoi(chaine_nombre));

	return 0;
}
