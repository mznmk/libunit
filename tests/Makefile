# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 23:59:20 by mmizuno           #+#    #+#              #
#    Updated: 2021/05/14 23:42:19 by mmizuno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ================================= Variable ================================= #

NAME					= tests

TESTS_LIB_DIR			= ./library/
TESTS_INC_DIR			= ./include/
TESTS_SRC_DIR			= ./

TESTS_SRC_NAME_COMMON	= ft_atoi/00_atoi_launcher.c \
						  ft_atoi/01_atoi_zero_a.c \
						  ft_atoi/02_atoi_zero_b.c \
						  ft_atoi/03_atoi_zero_c.c \
						  ft_atoi/04_atoi_number_a.c \
						  ft_atoi/05_atoi_number_b.c \
						  ft_atoi/06_atoi_number_c.c \
						  ft_atoi/07_atoi_positive_number_a.c \
						  ft_atoi/08_atoi_positive_number_b.c \
						  ft_atoi/09_atoi_positive_number_c.c \
						  ft_atoi/10_atoi_negative_number_a.c \
						  ft_atoi/11_atoi_negative_number_b.c \
						  ft_atoi/12_atoi_negative_number_c.c \
						  ft_atoi/13_atoi_int_min.c \
						  ft_atoi/14_atoi_int_max.c \
						  ft_atoi/15_atoi_int_underflow.c \
						  ft_atoi/16_atoi_int_overflow.c \
						  ft_atoi/17_atoi_long_min.c \
						  ft_atoi/18_atoi_long_max.c \
						  ft_atoi/19_atoi_long_underflow.c \
						  ft_atoi/20_atoi_long_overflow.c \
						  ft_atoi/21_atoi_nothing.c \
						  ft_atoi/22_atoi_before_string_a.c \
						  ft_atoi/23_atoi_after_string_a.c \
						  ft_atoi/24_atoi_before_space_a.c \
						  ft_atoi/25_atoi_after_space_a.c \
						  ft_atoi/26_atoi_before_invisible_a.c \
						  ft_atoi/27_atoi_after_invisible_a.c \
						  ft_atoi/28_atoi_multi_minus_a.c \
						  ft_atoi/29_atoi_multi_plus_a.c \
						  ft_strlen/00_strlen_launcher.c \
						  ft_strlen/01_strlen_true_test_return_ok_a.c \
						  ft_strlen/02_strlen_true_test_return_ok_b.c \
						  ft_strlen/03_strlen_true_test_return_segv.c \
						  ft_strlen_segv/00_strlen_segv_launcher.c \
						  ft_strlen_segv/01_strlen_segv_true_test_return_ko_a.c \
						  ft_strlen_segv/02_strlen_segv_true_test_return_ko_b.c \
						  ft_strlen_segv/03_strlen_segv_true_test_return_segv.c \
						  ft_strcpy/00_strcpy_launcher.c \
						  ft_strcpy/01_strcpy_true_test_return_buse.c
TESTS_SRCS_COMMON		= $(addprefix $(TESTS_SRC_DIR), $(TESTS_SRC_NAME_COMMON))
TESTS_OBJS_COMMON		= $(TESTS_SRCS_COMMON:.c=.o)
TESTS_SRC_NAME_MANDA	= execute_tests.c \
						  main.c
TESTS_SRCS_MANDA		= $(addprefix $(TESTS_SRC_DIR), $(TESTS_SRC_NAME_MANDA))
TESTS_OBJS_MANDA		= $(TESTS_SRCS_MANDA:.c=.o)					  
TESTS_SRC_NAME_BONUS	= ft_strlen_timeout/00_strlen_timeout_launcher.c \
						  ft_strlen_timeout/01_strlen_timeout_true_test_return_timeout.c \
						  ft_atoi_dividebyzero/00_atoi_dividebyzero_launcher.c \
						  ft_atoi_dividebyzero/01_atoi_dividebyzero_true_test_return_fpe.c \
						  ft_split_doublefree/00_split_doublefree_launcher.c \
						  ft_split_doublefree/01_split_doublefree_true_test_return_abrt.c \
						  execute_tests_bonus.c \
						  main.c
TESTS_SRCS_BONUS		= $(addprefix $(TESTS_SRC_DIR), $(TESTS_SRC_NAME_BONUS))
TESTS_OBJS_BONUS		= $(TESTS_SRCS_BONUS:.c=.o)

TESTED_INC_DIR			= ./include/
TESTED_SRC_DIR			= ./tested_functions/
TESTED_SRC_NAME_COMMON	= ft_atoi.c \
						  ft_strlen.c \
						  ft_strlen_segv.c \
						  ft_strcpy.c
TESTED_SRCS_COMMON		= $(addprefix $(TESTED_SRC_DIR), $(TESTED_SRC_NAME_COMMON))
TESTED_OBJS_COMMON		= $(TESTED_SRCS_COMMON:.c=.o)
TESTED_SRC_NAME_BONUS	= ft_strlen_timeout.c \
						  ft_atoi_dividebyzero.c \
						  ft_split_doublefree.c

TESTED_SRCS_BONUS		= $(addprefix $(TESTED_SRC_DIR), $(TESTED_SRC_NAME_BONUS))
TESTED_OBJS_BONUS		= $(TESTED_SRCS_BONUS:.c=.o)

LIBUNIT_DIR				= ../framework/
LIBUNIT_NAME			= libunit.a
LIBUNIT_LIBNAME			= unit
LIBUNIT_INC_DIR			= $(LIBUNIT_DIR)include/

# --------------------------------- command ---------------------------------- #

ECC					= gcc
CFLAGS				= -Wall -Wextra -Werror #-g -fsanitize=address
INCLUDE				= -I $(TESTS_INC_DIR) -I $(TESTED_INC_DIR) -I $(LIBUNIT_INC_DIR)
LDFLAGS				= -L $(TESTS_LIB_DIR)
LIBS				= -l $(LIBUNIT_LIBNAME)

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

$(NAME):			$(TESTS_OBJS_COMMON) $(TESTS_OBJS_MANDA) $(TESTED_OBJS_COMMON)
					@cd $(LIBUNIT_DIR) && make fclean && make mandatory
					@cp $(LIBUNIT_DIR)$(LIBUNIT_NAME) $(TESTS_LIB_DIR)
					@cd $(LIBUNIT_DIR) && make fclean
					$(CC) $(CFLAGS) $(TESTS_OBJS_COMMON) $(TESTS_OBJS_MANDA) $(TESTED_OBJS_COMMON) $(LDFLAGS) $(LIBS) -o $(NAME)
					@echo "$(ESC_CLR_YELLOW)"
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
					$(RM) $(TESTS_OBJS_COMMON) $(TESTS_OBJS_MANDA) $(TESTS_OBJS_BONUS) $(TESTED_OBJS_COMMON) $(TESTED_OBJS_BONUS)
					$(RM) $(TESTS_LIB_DIR)$(LIBUNIT_NAME)

# ---------------------------------- fclean ---------------------------------- #

fclean:				clean
					$(RM) $(NAME)

# ------------------------------------ re ------------------------------------ #

re:					fclean all

# ----------------------------------- test ----------------------------------- #

test:				$(NAME)
					@./$(NAME) 2>/dev/null

# -------------------------------- test_bonus -------------------------------- #

test_bonus:			$(TESTS_OBJS_COMMON) $(TESTS_OBJS_BONUS) $(TESTED_OBJS_COMMON) $(TESTED_OBJS_BONUS)
					@cd $(LIBUNIT_DIR) && make fclean && make bonus
					@cp $(LIBUNIT_DIR)$(LIBUNIT_NAME) $(TESTS_LIB_DIR)
					@cd $(LIBUNIT_DIR) && make fclean
					$(CC) $(CFLAGS) $(TESTS_OBJS_COMMON) $(TESTS_OBJS_BONUS) $(TESTED_OBJS_COMMON) $(TESTED_OBJS_BONUS) $(LDFLAGS) $(LIBS) -o $(NAME)
					@echo "$(ESC_CLR_CYAN)"
					@echo ' _            _       '
					@echo '| |          | |      '
					@echo '| |_ ___  ___| |_ ___ '
					@echo '| __/ _ \/ __| __/ __|'
					@echo '| ||  __/\__ \ |_\__ \'
					@echo ' \__\___||___/\__|___/'
					@echo "$(ESC_CLR_RESET)"
					@./$(NAME) 2>/dev/null

# ---------------------------------- .PHONY ---------------------------------- #

.PHONY:				all clean fclean re test test_bonus
