# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 11:54:52 by jmarinho          #+#    #+#              #
#    Updated: 2023/04/28 15:57:33 by jmarinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_print_char.c ft_print_char.c ft_print_hexa.c ft_print_pointer.c ft_print_unint.c \

NAME = libftprintf.a

OBJS = ${SRC:.c=.o}

RM = rm -f

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): ${OBJS}
	@make -C libft
	@cp libft/libft.a ${NAME}
	@ar rcs ${NAME} ${OBJS}

.c.o:
	@cc ${FLAGS} -c $< -o ${<:.c=.o}

clean:
	@${RM} ${OBJS}
	@make clean -C libft

fclean: clean
	@${RM} ${NAME}
	@make fclean -C libft
run: all
	cc ${FLAGS} *.c
	./a.out
re: fclean all

.PHONY: all clean fclean re
