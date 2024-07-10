/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:30:31 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/10 13:18:52 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	check_type(va_list args, char c, int *count)
{
	if (c == 'c')
		print_char(va_arg(args, int), count);
	else if (c == 's')
		print_str(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		print_number(va_arg(args, int), count);
	else if (c == 'u')
		print_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		print_hexa(va_arg(args, unsigned int), c, count);
	else if (c == 'p')
	{
		print_str("0x", count);
		print_pointer(va_arg(args, unsigned long), count);
	}
	if (c == '%')
		print_char('%', count);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i] && str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				check_type(args, str[++i], &count);
		}
		else
			print_char(str[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
