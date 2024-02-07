# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 16:12:44 by ngordobi          #+#    #+#              #
#    Updated: 2024/02/07 11:39:03 by ngordobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
LIBRARY = ar rc

SOURCES = ft_printf.c \

OBJECTS = $(SOURCES:.c=.o)

INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIBRARY) $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CCFLAGS) -c $(SOURCES)

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
.PHONY: all clean fclean re
