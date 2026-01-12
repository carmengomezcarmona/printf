/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:06:47 by carmgome          #+#    #+#             */
/*   Updated: 2026/01/12 16:00:02 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_selector (va_list args, char format)
{
    int count;

    count = 0;
    if (format == 'c')
        count = ft_putchar_printf(va_arg(args, int));
    else if (format == 's')
        count = ft_putstr_printf(va_arg(args, char *));
    else if (format == '%')
        count = ft_putchar_printf('%');
    return(count);    
}

int	ft_printf(char const *str, ...)
{
	va_list	args; //variable q almacenará la lista de argumentos variables
	int		i; // índice para recorrer la cadena de formato (str)
	int		total; //contador acumulativo de caracteres impresos (valor de retorno)

	i = 0;
	total = 0; 
	va_start(args, str); // Inicializa la lista de argumentos para que apunte al primer argumento despues de 'str'
	while (str[i]) //recorre la cadena hasta encontrar el caracter nulo \0
	{
		if (str[i] == '%') //si detecta un simbolo de porcentaje, se inicia una secuencia de conversion
		{
			i++;
            total = total + ft_selector(args, str[i]);
			/* Se pasa el argumento y el tipo de conversión (str[i]) al selector */
			/* El selector ejecutará la impresión y devolverá el número de caracteres impresos */
			// total += ft_selector(args, str[i]);
		}
		else
		{
            total = total + ft_putchar_printf(str[i]);
			/* Si no es un porcentaje, se imprime el carácter actual directamente */
			/* Se suma el retorno de ft_putchar (que debería ser 1) al total */
			// total += ft_putchar(str[i]);
			// total += ft_putchar(str[i]);
		}
		i++; /* Incrementa el índice para pasar al siguiente carácter */
	}
	va_end(args); /* Limpia la memoria y finaliza el uso de la lista de argumentos variádicos */
	return (total); /* Retorna el número total de caracteres que se enviaron a la salida estándar */
}