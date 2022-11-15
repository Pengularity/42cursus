# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 16:26:14 by wnguyen           #+#    #+#              #
#    Updated: 2022/11/15 17:28:25 by wnguyen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = crs

INCLUDES = ./libft.h

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

.c.o : $(SRC) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)