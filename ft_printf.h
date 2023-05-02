/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:59:53 by jmarinho          #+#    #+#             */
/*   Updated: 2023/05/02 15:35:20 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_int(int nbr);
int	ft_print_char(int c);
int	ft_print_string(char	*s);
int	ft_print_pointer(unsigned long p);
int	ft_print_unint(unsigned int nbr);
int	ft_print_hexa(unsigned int num, char c);
int	ft_print_percent(void);
#endif
