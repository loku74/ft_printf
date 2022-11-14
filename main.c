#include "includes/ft_printf.h"
#include <stdio.h>

int main()
{
	int	int_max;
	int	int_min;

	int_max = 2147483647;
	int_min = -2147483648;
	printf("%x\n", int_max * 2);
	printf("%x\n", int_min);
	printf("%x\n", -12);
	return (0);
}
