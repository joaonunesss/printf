/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:34:17 by jmarinho          #+#    #+#             */
/*   Updated: 2023/05/02 12:27:37 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int s)
{
	int	return_value;

	return_value = 0;
	return_value += write(1, &s, 1);
	return (return_value);
}
