/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:44:01 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/10 12:08:03 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	print_str(char *str, int *count)
{
	size_t	i;

	if (str == NULL)
	{
		return (print_str("(null)", count));
	}
	i = 0;
	while (str[i] != '\0')
	{
		print_char(str[i], count);
		i++;
	}
}
