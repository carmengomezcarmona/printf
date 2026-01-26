/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:11:27 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/26 11:52:21 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
