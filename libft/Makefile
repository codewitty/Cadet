# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jogomes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 13:14:29 by jogomes           #+#    #+#              #
#    Updated: 2018/10/17 16:10:32 by jogomes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

SRC = *.c

HDR = libft.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -I$(HDR)
	@ar rc $(NAME) *.o
	@ranlib *.a

clean:
	@/bin/rm -rf *.o

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
