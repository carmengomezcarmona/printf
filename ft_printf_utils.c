/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:35 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/12 16:15:07 by carmgome         ###   ########.fr       */
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
    
}