/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:18:00 by abdsebba          #+#    #+#             */
/*   Updated: 2024/11/22 20:50:15 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putstr(char *str, size_t *size);
void	ft_putchar(char c, size_t *size);
int		ft_printf(const char *s, ...);
void	ft_putnbr_base(long nbr, const char *base, size_t *size);
void	ft_putnbr_p(unsigned long nbr, const char *base, size_t *size);
void	ft_putnbr_unsigned(unsigned int nb, const char *base, size_t *size);

#endif
