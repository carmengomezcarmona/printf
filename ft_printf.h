/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:55 by carmgome          #+#    #+#             */
/*   Updated: 2026/02/03 10:34:50 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
# define FT_PRINTF_H 

# include <unistd.h> 
# include <stdarg.h> 

int	ft_putchar_printf(char c);
int	ft_putstr_printf(char *s);
int	ft_putnbr_printf(int n);
int	ft_putunsigned_base(unsigned int n, char *base, int base_len);
int	ft_putptr_printf(unsigned long n);

int	ft_selector(va_list args, char format);
int	ft_printf(char const *str, ...);

#endif 
