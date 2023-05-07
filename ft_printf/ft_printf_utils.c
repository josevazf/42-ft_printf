/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:32:00 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/26 09:40:52 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar_pf(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_pf(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}

int	ft_pnbase_pf(unsigned long int nbr, char *base)
{
	long	n;
	int		length;
	int		count;

	count = 0;
	length = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		n = n * -1;
		count += ft_putchar_pf('-');
	}
	if (n < length)
		count += ft_putchar_pf(base[n]);
	if (n >= length)
	{
		count += ft_pnbase_pf((n / length), base);
		count += ft_pnbase_pf((n % length), base);
	}
	return (count);
}

int	ft_putadd_pf(unsigned long long pointer)
{
	unsigned long long	n;
	int					count;

	count = 0;
	n = pointer;
	if (n < 16)
		count += ft_putchar_pf(LHEXBASE[n]);
	if (n >= 16)
	{
		count += ft_putadd_pf(n / 16);
		count += ft_putadd_pf(n % 16);
	}
	return (count);
}
