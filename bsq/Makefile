# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 19:01:04 by psanz-pa          #+#    #+#              #
#    Updated: 2024/07/24 17:04:29 by calguaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/clean.c srcs/ft_atoi.c srcs/ft_check_map.c srcs/ft_copy.c srcs/ft_divide.c srcs/ft_explorer.c srcs/ft_file.c srcs/ft_is_number.c srcs/ft_is_printable.c srcs/ft_is_whitespace.c srcs/ft_matrix_size.c srcs/ft_print.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/get.c srcs/init.c srcs/main.c
OBJS	= ${SRCS:.c=.o}
NAME	= bsq
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS}  ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
