#include "../includes/ft_printf.h"

static void	ft_putnbr(unsigned int n, int *len_num)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10, len_num);
		ft_putnbr(n % 10, len_num);
	}
	else
	{
		ft_putchar_fd(n + 48, 1);
		*len_num += 1;
	}
}

int	ft_treat_uint(unsigned int num)
{
	int	len_num;

	len_num = 0;
	ft_putnbr(num, &len_num);
	return (len_num);
}
