# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 20:10:22 by nboute            #+#    #+#              #
#    Updated: 2016/11/02 20:15:02 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/ft_display_file.c

OBJ = ft_display_file.o

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRCS)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
