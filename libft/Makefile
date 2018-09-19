# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 14:47:32 by tukhoza           #+#    #+#              #
#    Updated: 2018/06/15 09:48:14 by tukhoza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -c

CFLAGS = -Wall -Wextra -Werror -I include

OBJ = *.o

SRC = ft_atoi.c	ft_isascii.c ft_memalloc.c ft_memcpy.c ft_putchar.c \
	  ft_putnbr.c \
	  ft_strcat.c ft_strcpy.c ft_striter.c ft_strlen.c ft_strncmp.c	\
	  ft_strnstr.c	ft_strsub.c ft_bzero.c ft_isdigit.c ft_memccpy.c \
	  ft_memdel.c ft_putchar_fd.c ft_putnbr_fd.c ft_strchr.c ft_strdel.c \
	  ft_striteri.c ft_strmap.c ft_strncpy.c ft_strrchr.c ft_strtrim.c \
	  ft_isalnum.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putendl.c \
	  ft_putstr.c ft_strclr.c ft_strdup.c ft_strjoin.c ft_strmapi.c \
	  ft_strnequ.c ft_strsplit.c ft_tolower.c ft_isalpha.c	ft_itoa.c \
	  ft_memcmp.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strcmp.c \
	  ft_strequ.c ft_strlcat.c ft_strncat.c ft_strnew.c ft_strstr.c \
	  ft_toupper.c

$(NAME):
	$(CC) $(SRC) $(CFLAGS)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

fclean:
	rm -f $(OBJ) $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
