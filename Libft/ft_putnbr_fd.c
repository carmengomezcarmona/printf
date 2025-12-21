/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:41:40 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 12:31:00 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd ('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd (num / 10, fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
}
