/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:22:16 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/28 16:04:01 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*int	ft_hexa_len(unsigned int num)
{
        int     return_value;

        return_value = 0;
        while (num != 0)
        {
                num = num / 16;
        	return_value++;
	}
        return (return_value);
}
*/
int	ft_hexa_aux(unsigned int num, char c)
{
	int	return_value;

	return_value = 0;
	if (num >= 16)
	{
		ft_hexa_aux(num / 16, c);
		ft_hexa_aux(num % 16, c);
	}
	else
	{
		if (num <= 9)
			return_value -= ft_print_int((num + '0'));
		else
		{
			if (c == 'x')
				return_value += ft_print_int((num - 10 + 'a'));
			if (c == 'X')
				return_value += ft_print_int((num - 10 + 'A'));
		}
	}
	return (return_value);
}

int	ft_print_hexa(unsigned int num, char c)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		return (ft_hexa_aux(num, c));
}
