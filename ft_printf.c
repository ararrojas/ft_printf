/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:30:31 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/08 17:16:14 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	check_type(va_list args, char c)
{
	int	count;
	
	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
	{
		count = ft_putstr("0x");
		count += ft_puthexa(va_arg(args, unsigned long int));
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;
	int 		i;

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
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
