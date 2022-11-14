# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 11:29:55 by lbourniq          #+#    #+#              #
#    Updated: 2022/11/13 12:27:12 by lbourniq         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
AR = ar
AR_FLAGS = rcs

HEADER = libft.h

SRCS = ft_isprint.c\
	   ft_putchar_fd.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_atoi.c\
	   ft_itoa.c\
	   ft_putendl_fd.c\
	   ft_strlcat.c\
	   ft_substr.c\
	   ft_bzero.c\
	   ft_putnbr_fd.c\
	   ft_strlcpy.c\
	   ft_tolower.c\
	   ft_calloc.c\
	   ft_memchr.c\
	   ft_putstr_fd.c\
	   ft_strlen.c\
	   ft_toupper.c\
	   ft_isalnum.c\
	   ft_memcmp.c\
	   ft_split.c\
	   ft_strmapi.c\
	   ft_isalpha.c\
	   ft_memcpy.c\
	   ft_strchr.c\
	   ft_strncmp.c\
	   ft_isascii.c\
	   ft_memmove.c\
	   ft_strdup.c\
	   ft_strnstr.c\
	   ft_isdigit.c\
	   ft_memset.c\
	   ft_striteri.c\
	   ft_strrchr.c 

BONUS_SRCS = ft_lstnew.c\
			 ft_lstadd_front.c\
			 ft_lstsize.c ft_lstlast.c\
			 ft_lstadd_back.c\
			 ft_lstdelone.c\
			 ft_lstclear.c\
			 ft_lstiter.c\
			 ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(BONUS_OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
