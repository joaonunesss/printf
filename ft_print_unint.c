/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:43:54 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/28 16:04:23 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	len(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_unitoa_aux(char *str, long number, int i)
{
	while (number > 0)
	{
		str[i] = 48 + (number % 10);
		number = number / 10;
		i--;
	}
	return (str);
}

char	*ft_unitoa(unsigned int n)
{
	char	*str;
	long	number;
	int		i;

	number = n;
	i = len(number);
	if (number == 0)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (NULL);
	str[i--] = '\0';
	if (number == 0)
	{
		str[0] = 48;
		return (str);
	}
	str = ft_unitoa_aux(str, number, i);
	return (str);
}

int	ft_print_unint(unsigned int nbr)
{
	int		return_value;
	char	*ch;

	return_value = 0;
	ch = ft_unitoa(nbr);
	return_value = ft_print_char(ch);
	return (return_value);
}
