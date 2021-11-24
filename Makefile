# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboualam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 14:59:11 by mboualam          #+#    #+#              #
#    Updated: 2021/11/24 22:30:50 by mboualam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	   ft_isalnum.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memset.c \
	   ft_striteri.c \
	   ft_strmapi.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_split.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_atoi.c \
	   ft_strjoin.c \
	   ft_isalpha.c \
	   ft_memchr.c \
	   ft_strdup.c \
	   ft_strchr.c \
	   ft_strncmp.c \
	   ft_toupper.c \
	   ft_bzero.c \
	   ft_memmove.c \
	   ft_isascii.c \
	   ft_memcmp.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_calloc.c \
	   ft_isdigit.c \
	   ft_memcpy.c \
	   ft_strlcpy.c \
	   ft_strrchr.c \


all : $(NAME)

obj = $(SRCS:.c=.o)

$(NAME) : $(obj)
	$(CC) $(CFLAG) -c $(SRCS)
	ar rc $(NAME) $(obj)

clean :
	rm -rf $(obj)

fclean : clean
	rm -rf $(NAME)

re : fclean all

