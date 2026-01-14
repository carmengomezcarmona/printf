/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:55 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/13 16:27:26 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H //si no esta definida la etiqueta ft_printf_h...
# define FT_PRINTF_H //definela ahora mismo

# include <stdarg.h> // La herramienta de los regalos mágicos
# include <unistd.h> // La herramienta para escribir (write)

int	ft_putchar_printf(char c);
int	ft_putstr_printf(char *s);
int ft_putnbr_printf(int n);
int	ft_putunsigned_base(unsigned int n, char *base, int base_len);
int	ft_putptr_printf(unsigned long n);
int	ft_putptr_hex(unsigned long n);
int	ft_printf(char const *str, ...); // El nombre de nuestra función principal

#endif //cierra el bloque 