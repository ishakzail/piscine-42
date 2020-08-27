#include "ft_ultimate_ft.c"
#include <stdio.h>

int main()
{
	int *********nbr = NULL;
	int ********nbr_1 = NULL;
	int *******nbr_2 = NULL;
	int ******nbr_3 = NULL;
	int *****nbr_4 = NULL;
	int ****nbr_5 = NULL;
	int ***nbr_6 = NULL;
	int **nbr_7 = NULL;
	int *nbr_8 = NULL;
	int int_value = 12;
	
	nbr_8 = &int_value;
	nbr_7 = &nbr_8;
	nbr_6 = &nbr_7;
	nbr_5 = &nbr_6;
	nbr_4 = &nbr_5;
	nbr_3 = &nbr_4;
	nbr_2 = &nbr_3;
	nbr_1 = &nbr_2;
	nbr = &nbr_1;

	ft_ultimate_ft(nbr);

	printf("%d\n", *********nbr);
	printf("%d", int_value);

	return 0;
}
