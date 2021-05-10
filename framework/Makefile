# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 20:29:41 by mmizuno           #+#    #+#              #
#    Updated: 2021/05/10 12:51:55 by mmizuno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================= Variable ================================= #

NAME				= libunit.a

INC_DIR				= include/
SRC_DIR				= source/
SRC_NAME			= utility/ut_putchar_fd.c \
					  utility/ut_putendl_fd.c \
					  utility/ut_putnbr_fd.c \
					  utility/ut_putstr_fd.c \
					  utility/ut_strlen.c \
					  list_utilities.c \
					  print_status.c \
					  run_unittests_process.c \
					  run_unittests.c
SRCS				= $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJS				= $(SRCS:.c=.o)					  

CC					= gcc
CFLAGS				= -Wall -Wextra -Werror #-g -fsanitize=address

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

$(NAME):			$(OBJS)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS)
					@echo "$(ESC_CLR_N_YELLOW)"
					@echo '  __                                             _    '
					@echo ' / _|                                           | |   '
					@echo '| |_ _ __ __ _ _ __ ___   _____      _____  _ __| | __'
					@echo "|  _| '__/ _' | '_ ' _ \ / _ \ \ /\ / / _ \| '__| |/ /"
					@echo '| | | | | (_| | | | | | |  __/\ V  V / (_) | |  |   < '
					@echo '|_| |_|  \__,_|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\'
					@echo "$(ESC_CLR_RESET)"

# ----------------------------------- all ------------------------------------ #

all:				$(NAME)

# ---------------------------------- clean ----------------------------------- #

clean:
					$(RM) $(OBJS)

# ---------------------------------- fclean ---------------------------------- #

fclean:				clean
					$(RM) $(NAME)

# ------------------------------------ re ------------------------------------ #

re:					fclean all

# ---------------------------------- .PHONY ---------------------------------- #

.PHONY:				all clean fclean re
