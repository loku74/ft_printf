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

int	ft_func(char c, va_list args)
{
	if (c == 'c')
		return (ft_treat_char(va_arg(args, int)));
	if (c == 's')
		return (ft_treat_string(va_arg(args, char *)));
	if (c == 'p')
		return (ft_treat_ptr(va_arg(args, void *)));
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
	if (input)
		output_length++;
	while (++i < ft_strlen(input) - 1)
	{
		if (input[i] == '%')
		{
			output_length += ft_func(input[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(input[i], 1);
			output_length++;
		}
	}
	ft_putchar_fd(input[i], 1);
	va_end(args);
	return (output_length);
}
