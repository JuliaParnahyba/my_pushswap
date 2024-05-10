# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 19:15:54 by jparnahy          #+#    #+#              #
#    Updated: 2024/05/10 18:56:58 by jparnahy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c \
      init.c \
      utils_libft.c 

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME): $(NAME)
	ar rcs $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	cc $(FLAGS) $(OBJS) -o $(NAME)

clean:
	clean
	$(RM) $(OBJS)

fclean: clean
	fclean
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
