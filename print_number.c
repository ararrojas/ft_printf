/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:19:56 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/09 13:02:03 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_number(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		count += print_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		count += print_number(nb / 10);
		count += print_number(nb % 10);
	}
	else
		count += print_char(nb + 48);
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count += print_char('0');
	if (n > 9)
	{
		count += print_unsigned(n / 10);
		count += print_unsigned(n % 10);
	}
	else
		count += print_char(n + 48);
	return (count);
}
