#target: dependencies / prerequisites
#	command
#	command...


#to prevent relinks we need to create prerequisites for the target


NAME = push_swap

SOURCES = main.c swap.c validate_input.c validate_input_utils.c \
			init_stack.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME) 2 1 3 6 5 8 7 4 9 0

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re valgrind
