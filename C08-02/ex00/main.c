#include "ft.h"
#include <stdio.h>

int main (int argc, char **argv)
{
	(void)argc;
	int a = 42;
	int *a_pt = &a;
	int b = 12;
	int *b_pt = &b;

	ft_putchar(argv[0][0]);
	printf("-> la premiere lettre du nom de mon programme\n");
	printf("%d et %d sont bien inverses :", a, b);
	ft_swap(a_pt, b_pt);
	printf("%d - %d\n", a, b);
	ft_putstr(argv[1]);
	printf("-> mon premier argument\n");
	printf("La taille de mon deuxieme argument : %d\n", ft_strlen(argv[2]));
	printf("La difference lexicographique des deux arguments : %d\n", ft_strcmp(argv[1], argv[2]));

	return (0);
}

void	ft_swap(int *a, int *b)
{
	int old_a;

	old_a = *a;
	*a = *b;
	*b = old_a;
}

int	ft_strlen(char *str)
{
	int nbr_char;

	nbr_char = 0;
	while (str[nbr_char] != '\0')
	{
		nbr_char++;
	}
	return (nbr_char);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
