/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:50:05 by jmarinho          #+#    #+#             */
/*   Updated: 2023/05/02 12:50:55 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_len(unsigned long long num)
{
	int	return_value;

	return_value = 0;
	while (num != 0)
	{
		num = num / 16;
		return_value++;
	}
	return (return_value);
}

void	ft_pointer_aux(unsigned long long num)
{
	if (num >= 16)
	{
		ft_pointer_aux(num / 16);
		ft_pointer_aux(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_pointer(unsigned long long p)
{
	int	return_value;

	return_value = 0;
	if (p == 0)
	{
		return_value += write(1, "(nil)", 5);
		return (return_value);
	}
	return_value += write(1, "0x", 2);
	ft_pointer_aux(p);
	return_value += ft_pointer_len(p);
	return (return_value);
}
