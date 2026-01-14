#include <stdio.h>    // Para el printf original
#include "ft_printf.h" // Para TU ft_printf

int main(void)
{
    int mi_total;
    int original_total;

    // Prueba 1: Texto y caracteres
    printf("--- Prueba 1: Letras ---\n");
    mi_total = ft_printf("Hola %c, que %s!\n", 'A', "tal");
    original_total = printf("Hola %c, que %s!\n", 'A', "tal");
    
    printf("Mi contador: %d | Original: %d\n\n", mi_total, original_total);

    // Prueba 2: El porcentaje
    printf("--- Prueba 2: Porcentaje ---\n");
    mi_total = ft_printf("Esto es un 100%%\n");
    original_total = printf("Esto es un 100%%\n");

    // Prueba 3: Los números
    printf("--- Prueba 3: Números ---\n");
    mi_total = ft_printf("Entero: %i | Negativo: %d | Min: %d\n", 42, -5, -2147483648);
    original_total = printf("Entero: %i | Negativo: %d | Min: %d\n", 42, -5, -2147483648);
    
    printf("--- PRUEBA FINAL DE NÚMEROS ---\n");
    // Probamos Unsigned, Hex minúscula y Hex Mayúscula
    mi_total = ft_printf("U: %u | x: %x | X: %X\n", 4294967295U, 255, 255);
    original_total = printf("U: %u | x: %x | X: %X\n", 4294967295U, 255, 255);
    printf("Mi contador: %d | Original: %d\n", mi_total, original_total);

    return (0);
}
