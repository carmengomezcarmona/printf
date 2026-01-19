# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 19:07:16 by carmgome          #+#    #+#              #
#    Updated: 2026/01/13 16:28:09 by carmgome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la librería final
NAME = libftprintf.a

# Lista de tus archivos fuente
SRCS = ft_printf.c ft_printf_utils.c

# Convierte los .c en .o (archivos objeto)
OBJS = $(SRCS:.c=.o)

# Comandos y banderas
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

# Regla principal: compila todo
all: $(NAME)

# Crea la librería .a uniendo los archivos .o
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Regla para compilar los .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpia los archivos temporales (.o)
clean:
	$(RM) $(OBJS)

# Limpia los .o y la librería .a
fclean: clean
	$(RM) $(NAME)

# Re-compila todo desde cero
re: fclean all

.PHONY: all clean fclean re
