/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:34:17 by jmarinho          #+#    #+#             */
/*   Updated: 2023/05/02 12:38:30 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *s)
{
	int	return_value;
	int	i;

	i = 0;
	return_value = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
			return_value++;
		}
	}
	return (return_value);
}
