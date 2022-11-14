/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:36:57 by lbourniq          #+#    #+#             */
/*   Updated: 2022/11/13 16:51:41 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_func(char c, va_list *args)
{
	if (c == 'c')
		return (ft_treat_char(va_arg(*args, int)));
	else if (c == 's')
		return (ft_treat_string(va_arg(*args, char *)));
	else if (c == 'p')
		return (ft_treat_ptr(va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_treat_int(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_treat_uint(va_arg(*args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_treat_hexa(va_arg(*args, unsigned int), c));
	else if (c == '%')
		ft_putchar_fd('%', 1);
	return (1);
}

int	ft_printf(const char *input, ...)
{
	va_list args;
	int		output_length;
	size_t	i;

	va_start(args, input);
	i = -1;
	output_length = 0;
	if (!ft_strlen(input))
		return (0);
	while (++i < ft_strlen(input) - 1)
	{
		if (input[i] == '%')
			output_length += ft_func(input[++i], &args);
		else
		{
			ft_putchar_fd(input[i], 1);
			output_length++;
		}
	}
	if (i == ft_strlen(input))
		return (output_length);
	ft_putchar_fd(input[i], 1);
	va_end(args);
	return (output_length + 1);
}
