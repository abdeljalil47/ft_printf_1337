/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:30:37 by abdsebba          #+#    #+#             */
/*   Updated: 2024/11/22 17:06:17 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_p(unsigned long nbr, const char *base, size_t *size)
{
	unsigned long	size_base;

	size_base = 16;
	if (nbr >= size_base)
	{
		ft_putnbr_p((nbr / size_base), base, size);
	}
	ft_putchar(base[nbr % size_base], size);
}
