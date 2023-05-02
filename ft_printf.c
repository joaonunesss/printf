/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:12:36 by jmarinho          #+#    #+#             */
/*   Updated: 2023/05/02 14:07:18 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_var_type(va_list args, char c)
{
	int	return_value;

	return_value = 0;
	if (c == 'd' || c == 'i')
		return_value += ft_print_int(va_arg(args, int));
	else if (c == 's')
		return_value += ft_print_string(va_arg(args, char *));
	else if (c == 'c')
		return_value += ft_print_char(va_arg(args, int));
	else if (c == '%')
		return_value += ft_print_percent();
	else if (c == 'p')
		return_value += ft_print_pointer(va_arg(args, unsigned long long));
	else if (c == 'u')
		return_value += ft_print_unint(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		return_value += ft_print_hexa(va_arg(args, unsigned int), c);
	else
	{
		return_value += write(1, "Invalid Input", 13);
		return_value = -1;
	}
	return (return_value);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		return_value;
	int		i;

	va_start(args, format);
	i = 0;
	return_value = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			return_value += ft_var_type(args, format[i]);
		}
		else
			return_value += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (return_value);
}
