/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:59:53 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/28 15:41:44 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_int(int nbr);
int	ft_print_char(char *s);
int	ft_print_pointer(unsigned int p);
int	ft_print_unint(unsigned int nbr);
int	ft_print_hexa(unsigned int num, char c);
#endif
