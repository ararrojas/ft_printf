/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:46:14 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/10 17:29:44 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	print_hexa_pointer(unsigned long ptr, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr >= 16)
		print_hexa_pointer(ptr / 16, count);
	print_char(base[ptr % 16], count);
}

void	print_pointer(unsigned long ptr, int *count)
{
	if (ptr == '\0')
	{
		print_str("(nil)", count);
		return ;
	}
	else
	{
		print_str("0x", count);
		print_hexa_pointer(ptr, count);
	}
}
