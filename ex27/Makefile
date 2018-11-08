# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 18:00:46 by humarque          #+#    #+#              #
#    Updated: 2018/11/07 18:26:02 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = ft_display_file

source = ./srcs/ft_display.c ./srcs/ft_string.c

icld = ./includes/

flag = -Wall -Werror -Wextra

all: $(name)

$(name):
	gcc $(flag) -o $(name) $(source) -I $(icld)

clean:
	rm -f ft_display.o

fclean: clean
	rm -f $(name)
