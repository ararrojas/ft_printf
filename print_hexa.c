/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:40:59 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/10 13:11:09 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	print_hexa(unsigned int nb, const char c, int *count)
{
	char	*base;

	if (nb == 0)
		print_char('0', count);
	else
	{
		if (c == 'x')
			base = "0123456789abcdef";
		else
			base = "0123456789ABCDEF";
		if (nb >= 16)
		{
			print_hexa((nb / 16), c, count);
			print_hexa((nb % 16), c, count);
		}
		else
			print_char(base[nb], count);
	}
}
