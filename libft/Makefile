# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 14:21:20 by rbetz             #+#    #+#              #
#    Updated: 2022/04/10 18:47:15 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = ft_t*.c ft_s*.c ft_p*.c ft_m*.c ft_i*.c ft_c*.c ft_b*.c ft_a*.c
BON = ft_l*.c

CC = "cc"
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ft_*.o
	ar -rcs $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRC) libft.h

clean: 
	@/bin/rm -f *.o *.gch

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

bon:
	@$(CC) $(CFLAGS) -c $(BON) libft.h

bonus: bon all


.PHONY: all comp $(NAME) clean fclean re bonus bon