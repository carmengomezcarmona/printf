/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:47 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/19 11:31:57 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(va_list args, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar_printf(va_arg(args, int));
	else if (format == 's')
		count = ft_putstr_printf(va_arg(args, char *));
	else if (format == '%')
		count = ft_putchar_printf('%');
	else if (format == 'd' || format == 'i')
		count = ft_putnbr_printf(va_arg(args, int));
	else if (format == 'u')
		count = ft_putunsigned_base(va_arg(args, unsigned int),
				"0123456789", 10);
	else if (format == 'x')
		count = ft_putunsigned_base(va_arg(args, unsigned int),
				"0123456789abcdef", 16);
	else if (format == 'X')
		count = ft_putunsigned_base(va_arg(args, unsigned int),
				"0123456789ABCDEF", 16);
	else if (format == 'p')
		count = ft_putptr_printf(va_arg(args, unsigned long));
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			total = total + ft_selector(args, str[i]);
		}
		else
		{
			total = total + ft_putchar_printf(str[i]);
		}
		i++;
	}
	va_end(args);
	return (total);
}
