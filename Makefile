# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 16:33:00 by eluno-la          #+#    #+#              #
#    Updated: 2023/10/04 17:48:56 by eluno-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_printchar.c\
		ft_print_hex.c\
		ft_print_integer.c\
		ft_print_integer_unsig.c\
		ft_print_str.c\
		ft_print_pointer.c\
		ft_strlen.c

#variable para archivos objeto .c y .o
OBJS = $(SRCS:%.c=%.o)

#compilador a utilizar
CC = gcc

#variables para flags
CFLAGS = -Wall -Werror -Wextra -I.

#funcion principal
all: $(NAME)

#compilar librería
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#compilar con los flags
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

#Borrar objetos
clean:
	@rm -f $(OBJS)

#Borrar objetos y ejecutable
fclean: clean
	@rm -f $(NAME)

#Borrar todo
re: fclean all

#No crear archivos con estos nombres
.PHONY: all clean fclean re
