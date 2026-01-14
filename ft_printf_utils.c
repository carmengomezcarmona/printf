/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:35 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/13 16:25:36 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar_printf (char c) //encuentra %c un char suelto
{
    write(1, &c, 1);
    return(1);
}

int ft_putstr_printf (char *s) //encuentra %s una frase
{
    int i;
    i = 0;
    if (!s) //si no hay frase, imprimimos "(null)" y devolvemos 6 (q son sus letras)
	{
		write(1, "(null)", 6);
		return (6);
	}
    while (s[i]) //mientras haya letras...
        {
            write(1, &s[i], 1); //escribimos la letra actual
            i++; //contamos esa letra
        }
        return (i); //devolvemos el total de las letras contadas
}

int ft_putnbr_printf(int n)
{
    int len; //contador
    long num; //seguro para numero minimo

    len = 0;
    num = n;
    if (num < 0) //si num es menor q 0 (negativo)
        {
            len += ft_putchar_printf('-'); //imprimimos signo y contamos 1
            num = -num;
        }
    if (num > 9) // si num tiene más de una cifra 
        {
            len += ft_putnbr_printf(num / 10); //Llamamos a la función para que se encargue de los números de la izquierda(recursividad)
        }
        len += ft_putchar_printf((num % 10) + '0'); // Imprimimos el ÚLTIMO dígito transformado a letra
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
	// Imprimimos el prefijo obligatorio
	len += ft_putstr_printf("0x");
	// Llamamos a la sub-función que hace la magia del hex
	len += ft_putptr_hex(n);
	return (len);
}
