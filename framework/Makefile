# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 20:29:41 by mmizuno           #+#    #+#              #
#    Updated: 2021/05/12 23:18:14 by mmizuno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================= Variable ================================= #

NAME				= libunit.a

INC_DIR				= include/
SRC_DIR				= source/

SRC_NAME_MANDA		= utility/ut_putchar_fd.c \
					  utility/ut_putendl_fd.c \
					  utility/ut_putnbr_fd.c \
					  utility/ut_putstr_fd.c \
					  utility/ut_strlen.c \
					  list_utilities.c \
					  print_header.c \
					  print_status.c \
					  run_parent_process.c \
					  run_child_process.c \
					  run_unittests.c
SRCS_MANDA			= $(addprefix $(SRC_DIR), $(SRC_NAME_MANDA))
OBJS_MANDA			= $(SRCS_MANDA:.c=.o)

SRC_NAME_BONUS		= utility/ut_putchar_fd.c \
					  utility/ut_putendl_fd.c \
					  utility/ut_putnbr_fd.c \
					  utility/ut_putstr_fd.c \
					  utility/ut_strlen.c \
					  list_utilities.c \
					  print_header.c \
					  print_status.c \
					  run_parent_process.c \
					  run_child_process_bonus.c \
					  run_unittests.c
SRCS_BONUS			= $(addprefix $(SRC_DIR), $(SRC_NAME_BONUS))
OBJS_BONUS			= $(SRCS_BONUS:.c=.o) 

# --------------------------------- command ---------------------------------- #

CC					= gcc
CFLAGS				= -Wall -Wextra -Werror #-g -fsanitize=address

AR					= ar
ARFLAGS				= rcs

RM					= rm -f

# ---------------------------------- color ----------------------------------- #

ESC_CLR_RESET		= \e[00m
ESC_CLR_BLACK		= \e[30m
ESC_CLR_RED			= \e[31m
ESC_CLR_GREEN		= \e[32m
ESC_CLR_YELLOW		= \e[33m
ESC_CLR_BLUE		= \e[34m
ESC_CLR_MAGENTA		= \e[35m
ESC_CLR_CYAN		= \e[36m
ESC_CLR_WHITE		= \e[37m

# =============================== Make Command =============================== #

# ---------------------------------- .c.o ------------------------------------ #

.c.o:
					$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

# --------------------------------- $(NAME) ---------------------------------- #

$(NAME):			$(OBJS_MANDA)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS_MANDA)
					@echo "$(ESC_CLR_YELLOW)"
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
					$(RM) $(OBJS_MANDA) $(OBJS_BONUS)

# ---------------------------------- fclean ---------------------------------- #

fclean:				clean
					$(RM) $(NAME)

# ------------------------------------ re ------------------------------------ #

re:					fclean all

# -------------------------------- mandatory --------------------------------- #

mandatory:			$(NAME)

# ---------------------------------- bonus ----------------------------------- #

bonus:				$(OBJS_BONUS)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)
					@echo "$(ESC_CLR_CYAN)"
					@echo '  __                                             _    '
					@echo ' / _|                                           | |   '
					@echo '| |_ _ __ __ _ _ __ ___   _____      _____  _ __| | __'
					@echo "|  _| '__/ _' | '_ ' _ \ / _ \ \ /\ / / _ \| '__| |/ /"
					@echo '| | | | | (_| | | | | | |  __/\ V  V / (_) | |  |   < '
					@echo '|_| |_|  \__,_|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\'
					@echo "$(ESC_CLR_RESET)"

# ---------------------------------- .PHONY ---------------------------------- #

.PHONY:				all clean fclean re mandatory bonus
