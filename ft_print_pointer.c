/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:50:05 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/28 16:04:13 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_pointer(unsigned int p)
{
	int		return_value;
	char	c;

	c = 'x';
	return_value = 0;
	return_value += write(1, "0x", 2);
	if (p == 0)
		return_value += write(1, "0", 1);
	return_value += ft_print_hexa(p, c);
	return (return_value);
}
