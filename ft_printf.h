/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:32:19 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/10 16:45:33 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	print_char(char c, int *count);
void	print_str(char *str, int *count);
void	print_hexa(unsigned int nb, const char c, int *count);
void	print_number(int nb, int *count);
void	print_unsigned(unsigned int n, int *count);
void	print_pointer(unsigned long ptr, int *count);

#endif
