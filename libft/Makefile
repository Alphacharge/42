# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 14:21:20 by rbetz             #+#    #+#              #
#    Updated: 2022/03/25 18:00:44 by rbetz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = libft.h ft_toupper.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c
DEPS = ft_toupper.c ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlen.o

CC = "cc"
CFLAGS = ""

all: $(NAME)

$(NAME): comp
	ar -rcs $(NAME) $(DEPS)
comp:
	@$(CC) $(CFLAGS) -c $(SRC)
clean: 
	@/bin/rm -f $(DEPS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
