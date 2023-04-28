/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:34:17 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/28 16:03:26 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char(char *s)
{
	int	return_value;

	return_value = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else if (*s == '%')
		return_value += write(1, "%", 1);
	else
	{
		while (s)
		{
			write(1, &s, 1);
			s++;
			return_value++;
		}
	}
	return (return_value);
}
