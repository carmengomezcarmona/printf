/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 11:17:29 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/23 11:18:02 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
