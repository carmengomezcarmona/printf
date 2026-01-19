/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:35 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/19 11:21:25 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_printf(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_printf(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_printf(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num < 0)
	{
		len += ft_putchar_printf('-');
		num = -num;
	}
	if (num > 9)
	{
		len += ft_putnbr_printf(num / 10);
	}
	len += ft_putchar_printf((num % 10) + '0');
	return (len);
}

int	ft_putunsigned_base(unsigned int n, char *base, int base_len)
{
	int	len;

	len = 0;
	if (n >= (unsigned int)base_len)
	{
		len += ft_putunsigned_base(n / base_len, base, base_len);
	}
	len += ft_putchar_printf(base[n % base_len]);
	return (len);
}
