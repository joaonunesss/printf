/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:34:17 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/28 16:02:16 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_int(int nbr)
{
	int		return_value;
	char	*ch;

	return_value = 0;
	ch = ft_itoa(nbr);
	while (ch)
	{
		ft_print_char(ch);
		ch++;
		return_value++;
	}
	return (return_value);
}
