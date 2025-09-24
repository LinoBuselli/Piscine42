# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuselli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/21 20:34:15 by lbuselli          #+#    #+#              #
#    Updated: 2025/09/21 20:40:30 by lbuselli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c utils.c tab.c convert.c solver.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
