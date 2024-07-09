/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:32:19 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/09 13:00:00 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	print_char(char c);
int	print_str(char *str);
int	print_hexa(unsigned long nb, const char c);
int	print_number(int nb);
int	print_unsigned(unsigned int n);
int	print_pointer(unsigned long long ptr);

#endif
