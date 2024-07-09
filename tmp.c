/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:22:01 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/09 16:35:59 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(int *count, char c)
{
	int	check;

	if (*count == -1)
		return ;
	check = write(1, &c, 1);
	if (check == 1)
		((*count)++);
	if (check == -1)
		(*count) = -1;
}

void	print_unsigned(int count, unsigned int n)
{
	if (n == 0)
		count += print_char('0');
	if (n > 9)
	{
		count += print_unsigned(n / 10);
		count += print_unsigned(n % 10);
	}
	else
		print_char(n + 48);
}

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	a;
	int	b;

	a = printf("%u\n", 0) - 1;
	b = printf("%u\n", 4294967295) - 1;
	printf("OG: a	%d\nb	%d\n", a, b);
	//printf("", a, b);
	return (0);
}
