# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 16:02:05 by nboute            #+#    #+#              #
#    Updated: 2016/11/02 16:17:36 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

all: $(NAME)

$(NAME): 
	$(CC) -c $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
