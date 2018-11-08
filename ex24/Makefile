# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 18:37:58 by humarque          #+#    #+#              #
#    Updated: 2018/11/07 19:05:29 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = libft.a

source = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

objet =  ft_putchar.o \
		 ft_putstr.o \
		 ft_strcmp.o \
		 ft_strlen.o \
		 ft_swap.o \

idir = ./includes/

flag = -Wall -Werror -Wextra

all: $(name)

$(name):
	gcc $(flag) -c $(source) -I $(idir)
	ar rc $(name) *.o

clean:
	rm -f $(objet)

fclean: clean
	rm -f $(name)

re: fclean all
