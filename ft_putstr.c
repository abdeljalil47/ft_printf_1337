/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:11:19 by abdsebba          #+#    #+#             */
/*   Updated: 2024/11/21 23:06:54 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, size_t *size)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		(*size) += 6;
		return ;
	}
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			(*size)++;
			i++;
		}
	}
}
