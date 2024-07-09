/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:46:14 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/09 12:23:28 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_pointer(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		count += print_char('0');
	else
	{
		if (ptr >= 16)
		{
			count += print_pointer(ptr / 16);
			count += print_pointer(ptr % 16);
		}
		else
		{
			if (ptr < 10)
				count += print_char(ptr + 48);
			else
				count += print_char(ptr - 10 + 'a');
		}
	}
	return (count);
}
