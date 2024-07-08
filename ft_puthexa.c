/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:40:59 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/08 17:13:43 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexa(unsigned long nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_puthexa(nb / 16);
		count += ft_puthexa(nb % 16);
	}
	else
		count += ft_putchar(base[nb % 16]);
	return (count);
}
