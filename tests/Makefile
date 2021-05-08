# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 23:59:20 by mmizuno           #+#    #+#              #
#    Updated: 2021/05/09 00:02:05 by mmizuno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ================================= Variable ================================= #

NAME				= tests

TESTS_LIB_DIR		= ./library/
TESTS_INC_DIR		= ./include/
TESTS_SRC_DIR		= ./
TESTS_SRC_NAME		= ft_strlen/00_launcher.c \
					  ft_strlen/01_basic_test.c \
					  ft_strlen/02_null_test.c \
					  main.c
TESTS_SRCS			= $(addprefix $(TESTS_SRC_DIR), $(TESTS_SRC_NAME))
TESTS_OBJS			= $(TESTS_SRCS:.c=.o)					  

TESTED_INC_DIR		= ./include/
TESTED_SRC_DIR		= ./tested_functions/
TESTED_SRC_NAME		= ft_strlen.c
TESTED_SRCS			= $(addprefix $(TESTED_SRC_DIR), $(TESTED_SRC_NAME))
TESTED_OBJS			= $(TESTED_SRCS:.c=.o)					  

LIBUNIT_DIR			= ../framework/
LIBUNIT_NAME		= libunit.a
LIBUNIT_LIBNAME		= unit
LIBUNIT_INC_DIR		= $(LIBUNIT_DIR)include/

CC					= gcc
CFLAGS				= -Wall -Wextra -Werror #-g -fsanitize=address
INCLUDE				= -I $(TESTS_INC_DIR) -I $(TESTED_INC_DIR) -I $(LIBUNIT_INC_DIR)
LDFLAGS				= -L $(TESTS_LIB_DIR)
LIBS				= -l $(LIBUNIT_LIBNAME)

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

$(NAME):			$(TESTS_OBJS) $(TESTED_OBJS)
					@cd $(LIBUNIT_DIR) && make re
					@cp $(LIBUNIT_DIR)$(LIBUNIT_NAME) $(TESTS_LIB_DIR)
					@cd $(LIBUNIT_DIR) && make fclean
					$(CC) $(CFLAGS) $(TESTS_OBJS) $(TESTED_OBJS) $(LDFLAGS) $(LIBS) -o $(NAME)
					@echo "$(ESC_CLR_N_YELLOW)"
					@echo ' _            _       '
					@echo '| |          | |      '
					@echo '| |_ ___  ___| |_ ___ '
					@echo '| __/ _ \/ __| __/ __|'
					@echo '| ||  __/\__ \ |_\__ \'
					@echo ' \__\___||___/\__|___/'
					@echo "$(ESC_CLR_RESET)"

# ----------------------------------- all ------------------------------------ #

all:				$(NAME)

# ---------------------------------- clean ----------------------------------- #

clean:
					$(RM) $(TESTS_OBJS) $(TESTED_OBJS)
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
