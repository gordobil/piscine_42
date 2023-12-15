# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 12:32:09 by ngordobi          #+#    #+#              #
#    Updated: 2023/12/11 13:02:08 by ngordobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo ejecutable
NAME = libft

# Compilador
CC = gcc

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Lista de archivos fuente
SOURCES = main.c

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.c=.o)

# Regla por defecto para compilar el programa
all: $(NAME)

# Regla para compilar el programa
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

# Regla para limpiar archivos objeto y el ejecutable
clean:
	rm -f $(OBJECTS)

# Regla para limpiar archivos objeto, ejecutable y otros archivos generados
fclean: clean
	rm -f $(NAME)

# Regla para reconstruir el proyecto desde cero
re: fclean all

# Dependencias
$(OBJECTS): $(SOURCES)

# La regla .c -> .o es manejada automáticamente por Make
.PHONY: all clean fclean re

