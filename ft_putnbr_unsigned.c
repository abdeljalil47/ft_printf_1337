/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:12:52 by abdsebba          #+#    #+#             */
/*   Updated: 2024/11/20 23:15:02 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, const char *base, size_t *size)
{
	unsigned int	size_base;

	size_base = 10;
	if (nb >= size_base)
	{
		ft_putnbr_unsigned(nb / size_base, base, size);
	}
	ft_putchar(base[nb % size_base], size);
}
