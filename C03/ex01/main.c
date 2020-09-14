#include <stdio.h>
#include "ft_strncmp.c"
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{	
	int i = 0;
	if(argc == 3)
	{
		while (i < 20)
		{
			if(ft_strncmp(argv[1], argv[2], i) != strncmp(argv[1], argv[2], i))
			{
				printf("Difference de fonctionnement : \n");
				printf("Resultat ft_strncmp %d \n", ft_strncmp(argv[1], argv[2], i));
				printf("Resultat strncmp %d \n", strncmp(argv[1], argv[2], i));
				printf("Size : %d\n", i);
			}
			i++;
		}
	}
	else
		printf("Merci de rentrer deux chaines uniquement");
	return 0;
}
