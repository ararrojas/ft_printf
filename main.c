/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:21:33 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/08 17:11:58 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("----------------------------\n");
	printf("Printing %%c \n");
	printf("Function printf = %c \n", 'c');
	int result = ft_printf("My function = %c \n", 'c');
	printf("Total data = %i \n", result);
	printf("----------------------------\n");

	printf("Printing %%s \n");
	char str[] = "hola";
	printf("Function printf = %s \n", str);
	int result2 = ft_printf("My function = %s \n", str);
	printf("Total data = %i \n", result2);
	printf("----------------------------\n");

	printf("Printing %%p \n");
	int x = 42;
	void *p = &x;
	printf("Function printf = %p \n", p);
	int result3 = ft_printf("My function = %p \n", p);
	printf("Total data = %i \n", result3);
	printf("----------------------------\n");
}
