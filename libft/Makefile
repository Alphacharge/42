# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 14:21:20 by rbetz             #+#    #+#              #
#    Updated: 2022/04/01 16:07:28 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
BON = ft_

CC = "cc"
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ft_*.o
	ar -rcs $(NAME) $^

%.o: %.c
	@$(CC) $(CFLAGS) -c ft_*.c libft.h

clean: 
	@/bin/rm -f *.o *.gch

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

_bonus: all
	@$(CC) $(CFLAGS) -c $(BON) libft.h

.PHONY: all comp $(NAME) clean fclean re _bonus