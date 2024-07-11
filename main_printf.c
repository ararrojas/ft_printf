/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:21:33 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/11 11:12:48 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("----------------------------\n");
	printf("Printing %%c \n");
	printf("Function printf = %c \n", '\\');
	int result = ft_printf("My function = %c \n", '\\');
	printf("Total data = %i \n", result);
	printf("----------------------------\n");

	printf("Printing %%s \n");
	char str[] = "hola";
	printf("Function printf = %s \n", str);
	int result2 = ft_printf("My function = %s \n", str);
	printf("Total data = %i \n", result2);
	printf("----------------------------\n");

	printf("Printing %%d \n");
	printf("Function printf = %d, %d, %d \n", -0, 42, -42);
	int result3 = ft_printf("My function = %d, %d, %d \n", -0, 42, -42);
	printf("Total data = %i \n", result3);
	printf("----------------------------\n");

	printf("Printing %%i \n");
	printf("Function printf = %i \n", 2024);
	int result4 = ft_printf("My function = %i \n", 2024);
	printf("Total data = %i \n", result4);
	printf("----------------------------\n");

	printf("Printing %%u when num is neg\n");
	printf("Function printf = %u \n", -2);
	int results = ft_printf("My function = %u \n", -2);
	printf("Total data = %i \n", results);
	printf("----------------------------\n");

	printf("Printing %%u \n");
	printf("Function printf = %u \n", 42);
	int resultss = ft_printf("My function = %u \n", 42);
	printf("Total data = %i \n", resultss);
	printf("----------------------------\n");

	printf("Printing %%x \n");
	printf("Function printf = %x \n", 42);
	int result5 = ft_printf("My function = %x \n", 42);
	printf("Total data = %i \n", result5);
	printf("----------------------------\n");

	printf("Printing %%x of neg num \n");
	printf("Function printf = %x \n", -42);
	int resultx = ft_printf("My function = %x \n", -42);
	printf("Total data = %i \n", resultx);
	printf("----------------------------\n");

	printf("Printing %%X \n");
	printf("Function printf = %X \n", 2024);
	int result6 = ft_printf("My function = %X \n", 2024);
	printf("Total data = %i \n", result6);
	printf("----------------------------\n");
	
	int x = '\0';
	int *ptr = &x;
	int *ptr2 = NULL;
	printf("Printing %%p \n");
	int totaldata = printf("Function printf = %p\n null pointer = %p\n", ptr, ptr2);
	printf("Total data printf= %d \n", totaldata);
	int result7 = ft_printf("My function = %p \n null pointer = %p \n", ptr, ptr2);
	printf("Total data = %i \n", result7);
	printf("----------------------------\n");

	printf("Printing %% \n");
	printf("Function printf = %% \n");
	int result8 = ft_printf("My function = %% \n");
	printf("Total data = %i \n", result8);
	printf("----------------------------\n");
}
