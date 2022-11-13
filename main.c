#include "includes/ft_printf.h"
#include <stdio.h>

int main()
{
	int	k;

	char f[5] = "fuck";
	ft_printf("%s\n%c\n", f, 'c');
	k = ft_printf("%p test allo oui mdr lol", f);
	printf(" | %d\n", k);
	k = printf("%p test allo oui mdr lol", f);
	printf(" | %d\n", k);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	k = printf("");
	printf("%d", k);
	return (0);
}
