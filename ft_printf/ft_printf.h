/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:32:55 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/26 10:18:18 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

# define LHEXBASE "0123456789abcdef"
# define UHEXBASE "0123456789ABCDEF"
# define DECBASE "0123456789"

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int		ft_specifier(char specifier, va_list args);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *s);
int		ft_pnbase_pf(unsigned long int nbr, char *base);
int		ft_putadd_pf(unsigned long long pointer);
int		ft_check_p(unsigned long long pointer);

#endif
