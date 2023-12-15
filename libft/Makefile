# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 16:12:44 by ngordobi          #+#    #+#              #
#    Updated: 2023/12/15 16:26:32 by ngordobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SROURCES = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c\
		   ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strnstr.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB)
