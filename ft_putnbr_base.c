/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:02:59 by abdsebba          #+#    #+#             */
/*   Updated: 2024/11/22 20:51:05 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putnbr_base(long nbr, const char *base, size_t *size)
{
	long	size_base;

	size_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-', size);
		nbr = -nbr;
	}
	if (nbr >= size_base)
	{
		ft_putnbr_base(nbr / size_base, base, size);
	}
	ft_putchar(base[nbr % size_base], size);
}
