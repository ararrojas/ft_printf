/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:40:59 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/09 13:16:42 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_hexa(unsigned long nb, const char c)
{
	int		count;

	count = 0;
	if (nb == 0)
		count += print_char('0');
	if (nb >= 16)
	{
		count += print_hexa(nb / 16, c);
		count += print_hexa(nb % 16, c);
	}
	else
	{
		if (nb < 10)
			count += print_char(nb + 48);
		else
		{
			if (c == 'x')
				count += print_char(nb - 10 + 'a');
			if (c == 'X')
				count += print_char(nb - 10 + 'A');
		}
	}
	return (count);
}
