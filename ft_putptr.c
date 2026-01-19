/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:14:01 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/19 11:15:01 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_hex(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_putptr_hex(n / 16);
	len += ft_putchar_printf(base[n % 16]);
	return (len);
}

int	ft_putptr_printf(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (ft_putstr_printf("(nil)"));
	len += ft_putstr_printf("0x");
	len += ft_putptr_hex(n);
	return (len);
}
