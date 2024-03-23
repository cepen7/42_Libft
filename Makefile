
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJECTS = $(SOURCES:.c=.o)
SOURCES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
		


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# % is a wildcard - anything which ends with .c 
# $< refers to the first dependency, here it is %.c

clean:
	rm $(NAME) $(OBJECTS)

fclean:
	rm -f $(NAME) $(OBJECTS)

re:


