# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 16:12:44 by ngordobi          #+#    #+#              #
#    Updated: 2024/01/04 12:54:59 by ngordobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
LIBRARY = ar rcs

SOURCES = main.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii\
		  ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c\
		  ft_strnstr.c ft_strchr.c ft_strrchr.c ft_memset.c ft_memcpy.c\
			ft_memmove.c ft_toupper.c ft_tolower.c ft_memchr.c ft_memcmp.c\
			ft_bzero.c
OBJECTS = $(SOURCES:.c=.o)

INCLUDE = libft.h

$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIBRARY) $(NAME) $(OBJECTS)

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(OBJECTS)

re: fclean all
.PHONY: all clean fclean re
