# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 16:33:00 by eluno-la          #+#    #+#              #
#    Updated: 2023/06/22 15:18:38 by eluno-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_print_hex.c\
		ft_print_integer.c\
		ft_print_integer_unsig.c\
		ft_print_str.c\
		ft_printchar.c\
		ft_print_pointer.c
		ft_strlen.c

OBJS = $(SRC:%.c=%.o)

/*Compilador a utilizar*/
CC = gcc

CFLAGS = -Wall -Werror -Wextra -I.
RM = rm -rf
AR = ar crs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJS)


%.o: %.c
	$(CC) -c $(FLAGS) $?

clean:
	$(RM) $(OBJS)

#Borrar objetos y ejecutable
fclean: clean
	$(RM) $(NAME)

re: fclean alL

#No crear archivos con estos nombres
.PHONY: all clean fclean re
