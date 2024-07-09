/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:30:31 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/09 13:26:24 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	check_type(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += print_char(va_arg(args, int));
	else if (c == 's')
		count += print_str(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += print_number(va_arg(args, int));
	else if (c == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += print_hexa(va_arg(args, unsigned long), c);
	else if (c == 'p')
	{
		count += print_str("0x");
		count += print_pointer(va_arg(args, unsigned long long));
	}
	else if (c == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				count += check_type(args, str[++i]);
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
