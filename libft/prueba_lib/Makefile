NAME = plibft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
LIBRARY = ar rcs

SOURCES = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJECTS = $(SOURCES:.c=.o)

INCLUDE = plibft.h

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
