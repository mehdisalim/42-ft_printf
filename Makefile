# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esalim <esalim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 12:59:48 by esalim            #+#    #+#              #
#    Updated: 2022/10/18 12:48:33 by esalim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printf.c ft_putnbr_base.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_strchr.c
OBJS = ${CFILES:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a
AR = ar rsc
RM = rm

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean: $(OBJS)
	$(RM) -rf $^

fclean: clean
	$(RM) -rf $(NAME)

re: all $(NAME)
