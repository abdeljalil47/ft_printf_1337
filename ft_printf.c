/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:41:45 by abdsebba          #+#    #+#             */
/*   Updated: 2024/11/25 18:28:01 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_format(va_list *args, char frm, size_t *size)
{
	if (frm == 'c')
		ft_putchar(va_arg(*args, int), size);
	else if (frm == 's')
		ft_putstr(va_arg(*args, char *), size);
	else if (frm == 'd' || frm == 'i')
		ft_putnbr_base(va_arg(*args, int), "0123456789", size);
	else if (frm == 'x')
		ft_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef", size);
	else if (frm == 'X')
		ft_putnbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF", size);
	else if (frm == 'p')
	{
		ft_putstr("0x", size);
		ft_putnbr_p(va_arg(*args, unsigned long), "0123456789abcdef", size);
	}
	else if (frm == 'u')
		ft_putnbr_unsigned(va_arg(*args, unsigned int), "0123456789", size);
	else
		ft_putchar(frm, size);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	size_t	size;

	va_start(ap, s);
	size = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (*s)
	{
		if (*s != '%')
			ft_putchar(*s, &size);
		else if (*s == '%' && *(s + 1) == '%')
			ft_putchar(*s++, &size);
		else
		{
			if (*++s == '\0')
				break ;
			ft_print_format(&ap, *s, &size);
		}
		s++;
	}
	va_end(ap);
	return (size);
}
#include <stdio.h>
int main()
{
	char *c ;
	int i = ft_printf("%c   %s    %p    %d    %i     %u      %x    %X    %%  kjfifg8giuwgf\n",'c',"ggggggggg",c,1245,1234,-7845,1234,1234);
	ft_printf("%d \n",i);
	ft_printf("------------------------------------------------------------------------------------------------------------------------------------\n");

	int s = printf("%c   %s    %p    %d    %i     %u      %x    %X    %%  kjfifg8giuwgf\n",'c',"ggggggggg",c,1245,1234,-7845,1234,1234);
	ft_printf("%d",s);
}
