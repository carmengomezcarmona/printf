
*Este proyecto ha sido creado como parte del currículo de 42 por carmgome* 

# Printf

## Descripción

El objetivo de **ft_printf** es recrear la función printf de la librería estándar de C, comprendiendo a fondo:
- El manejo de strings y caracteres.
- El uso de funciones variádicas.
- La conversión y formateo de distintos tipos de datos.

**Prototipo obligatorio:** int ft_printf(char const *str, ...)  
Debe devolver: el número total de caracteres impresos o un valor negativo en caso de error.

**Conversiones obligatorias**  
| `%c` | Carácter |  
| `%s` | String |  
| `%p` | Puntero en hexadecimal |  
| `%d` | Entero decimal |  
| `%i` | Entero decimal |  
| `%u` | Entero sin signo |  
| `%x` | Hexadecimal en minúsculas |  
| `%X` | Hexadecimal en mayúsculas |  
| `%%` | Imprime `%` |  

## Instrucciones

*Clonar el repositorio:*  
git clone url del repositorio

*Entrar en la carpeta del proyecto*

*Compilar la librería:*  
make  
*Limpiar los archivos objeto:*  
make clean

*Eliminar todo, incluida la librería:*   
make fclean

*Recompilar desde cero:*  
make re  

## Recursos

El desarrollo de este proyecto se ha apoyado principalmente en el aprendizaje colaborativo con compañeros, compartiendo ideas y resolviendo dudas durante el proceso.  
El manual de la terminal (`man`) ha sido la referencia principal para comprender el comportamiento de las funciones utilizadas y el manejo de funciones variádicas.  
Además, se han consultado recursos adicionales como documentación en línea y vídeos educativos para reforzar la comprensión de la lógica del proyecto.  
De forma puntual, se ha utilizado inteligencia artificial como herramienta de apoyo para obtener explicaciones más visuales y ejemplos conceptuales, siempre con el objetivo de mejorar la comprensión y no como generador de código final.