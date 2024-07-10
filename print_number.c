/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:19:56 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/10 12:10:11 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	print_number(int nb, int *count)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
		return ;
	}
	if (nb < 0)
	{
		print_char('-', count);
		print_number((nb * -1), count);
	}
	if (nb > 9)
	{
		print_number((nb / 10), count);
		print_number((nb % 10), count);
	}
	else
		print_char((nb + 48), count);
}

void	print_unsigned(unsigned int n, int *count)
{
	if (n == 0)
		print_char('0', count);
	if (n > 9)
	{
		print_unsigned((n / 10), count);
		print_unsigned((n % 10), count);
	}
	else
		print_char((n + 48), count);
}
