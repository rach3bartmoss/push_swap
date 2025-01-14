#target: dependencies / prerequisites
#	command
#	command...


#to prevent relinks we need to create prerequisites for the target


NAME = push_swap

SOURCES = main.c swap.c gen_arr.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re valgrind
