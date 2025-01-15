#target: dependencies / prerequisites
#	command
#	command...


#to prevent relinks we need to create prerequisites for the target


NAME = push_swap

SOURCES = main.c swap.c validate_input.c validate_input_utils.c \
			init_stack.c push.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

GREEN = \033[0;32m
RESET = \033[0m

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I. -I$(LIBFT_DIR)

all: COMPILE_LIBFT $(NAME)
	@echo "$(GREEN)$(NAME) compiled$(RESET)"

COMPILE_LIBFT:
	@$(MAKE) -s -C $(LIBFT_DIR)

$(NAME): $(OBJECTS) $(LIBFT)
	$(CC) $(FLAGS) $(OBJECTS) $(LIBFT) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME) 2 1 3 6 5 8 7 4 9 0

clean:
	@$(MAKE) -s -C $(LIBFT_DIR) clean --silent
	rm -f $(OBJECTS)

fclean: clean
	@$(MAKE) -s -C $(LIBFT_DIR) fclean --silent
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re valgrind
