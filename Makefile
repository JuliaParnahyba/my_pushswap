# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 19:15:54 by jparnahy          #+#    #+#              #
#    Updated: 2024/05/09 21:13:20 by jparnahy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c \
      init.c \
      op_utils.c 

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

PRINTF_ARCH = printf/libftprintf.a

$(NAME): $(PRINTF_ARCH) $(NAME)
	ar rcs $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	cc $(FLAGS) $(OBJS) $(PRINTF_ARCH) -o $(NAME)

$(PRINTF_ARCH):
	make -C printf

clean:
	make -C printf clean
	$(RM) $(OBJS)

fclean: clean
	make -C printf fclean
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
