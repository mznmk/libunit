# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 23:59:20 by mmizuno           #+#    #+#              #
#    Updated: 2021/05/10 00:59:50 by mmizuno          ###   ########.fr        #
#                                                                              
# **************************************************************************** #

## ================================= Variable ================================= #

NAME				= real-tests

TESTS_LIB_DIR		= ./library/
TESTS_INC_DIR		= ./include/
TESTS_SRC_DIR		= ./
TESTS_SRC_NAME		= ft_memmove/00_memmove_launcher.c \
					  ft_memmove/01_memmove_basic_text_a.c \
					  ft_strlen/00_strlen_launcher.c \
					  ft_strlen/01_strlen_basic_test.c \
					  ft_strlen/02_long_str_test.c \
					  ft_strlen/03_escaped_test.c \
					  ft_strlen/04_escaped_test2.c \
					  ft_strlen/05_space_test.c \
					  ft_strlen/06_space_test2.c \
					  ft_strlen/07_terminated_test.c \
					  ft_strlen/08_terminated_test2.c \
					  ft_strlen/09_unicode_test.c \
					  ft_strlen/10_basic_ko_test.c \
					  ft_strlen/11_null_test.c \
					  ft_strlen/12_buserror_test.c \
					  ft_atoi/00_atoi_launcher.c \
					  ft_atoi/01_atoi_zero_a.c \
					  ft_atoi/02_atoi_positive_number_a.c \
					  ft_atoi/03_atoi_negative_number_a.c \
					  main.c
TESTS_SRCS			= $(addprefix $(TESTS_SRC_DIR), $(TESTS_SRC_NAME))
TESTS_OBJS			= $(TESTS_SRCS:.c=.o)					  

LIBFT_DIR			= ./libft/
LIBFT_NAME			= libft.a
LIBFT_LIBNAME		= ft
LIBFT_INC_DIR		= $(LIBFT_DIR)includes/

LIBUNIT_DIR			= ../framework/
LIBUNIT_NAME		= libunit.a
LIBUNIT_LIBNAME		= unit
LIBUNIT_INC_DIR		= $(LIBUNIT_DIR)include/

CC					= gcc
CFLAGS				= -Wall -Wextra -Werror #-g -fsanitize=address
INCLUDE				= -I $(TESTS_INC_DIR) -I $(LIBFT_INC_DIR) -I $(LIBUNIT_INC_DIR)
LDFLAGS				= -L $(TESTS_LIB_DIR)
LIBS				= -l $(LIBFT_LIBNAME) -l $(LIBUNIT_LIBNAME)

AR					= ar
ARFLAGS				= rcs

RM					= rm -f

# ---------------------------------- color ----------------------------------- #

ESC_CLR_RESET		= \e[00m
ESC_CLR_N_BLACK		= \e[30m
ESC_CLR_N_RED		= \e[31m
ESC_CLR_N_GREEN		= \e[32m
ESC_CLR_N_YELLOW	= \e[33m
ESC_CLR_N_BLUE		= \e[34m
ESC_CLR_N_MAGENTA	= \e[35m
ESC_CLR_N_CYAN		= \e[36m
ESC_CLR_N_WHITE		= \e[37m

# =============================== Make Command =============================== #

# ---------------------------------- .c.o ------------------------------------ #

.c.o:
					$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

# --------------------------------- $(NAME) ---------------------------------- #

$(NAME):			$(TESTS_OBJS)
					@cd $(LIBFT_DIR) && make re
					@cp $(LIBFT_DIR)$(LIBFT_NAME) $(TESTS_LIB_DIR)
					@cd $(LIBFT_DIR) && make fclean
					@cd $(LIBUNIT_DIR) && make re
					@cp $(LIBUNIT_DIR)$(LIBUNIT_NAME) $(TESTS_LIB_DIR)
					@cd $(LIBUNIT_DIR) && make fclean
					$(CC) $(CFLAGS) $(TESTS_OBJS) $(LDFLAGS) $(LIBS) -o $(NAME)
					@echo "$(ESC_CLR_N_YELLOW)"
					@echo '                _        _            _       '
					@echo '               | |      | |          | |      '
					@echo ' _ __ ___  __ _| |______| |_ ___  ___| |_ ___ '
					@echo "| '__/ _ \/ _' | |______| __/ _ \/ __| __/ __|"
					@echo '| | |  __/ (_| | |      | ||  __/\__ \ |_\__ \'
					@echo '|_|  \___|\__,_|_|       \__\___||___/\__|___/'
					@echo "$(ESC_CLR_RESET)"

# ----------------------------------- all ------------------------------------ #

all:				$(NAME)

# ---------------------------------- clean ----------------------------------- #

clean:
					$(RM) $(TESTS_OBJS)
					$(RM) $(TESTS_LIB_DIR)$(LIBFT_NAME)
					$(RM) $(TESTS_LIB_DIR)$(LIBUNIT_NAME)

# ---------------------------------- fclean ---------------------------------- #

fclean:				clean
					$(RM) $(NAME)

# ------------------------------------ re ------------------------------------ #

re:					fclean all

# ----------------------------------- test ----------------------------------- #

test:				$(NAME)
					@./$(NAME)

# ---------------------------------- .PHONY ---------------------------------- #

.PHONY:				all clean fclean re test
