# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:12:28 by lbourniq          #+#    #+#              #
#    Updated: 2022/11/13 16:20:15 by lbourniq         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#Standard

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
AR_FLAGS = rcs
RM = rm
RM_FLAGS = -rf
HEADER = ft_printf.h

SRCS = ft_printf.c\
	   ft_treat_char.c\
	   ft_treat_string.c\
	   ft_treat_ptr.c

#Directories

SRCS_DIR = ./srcs/
INCLUDES_DIR = ./includes/
LIBFT_DIR = ./libft/
HEADER_FILES = $(addprefix $(INCLUDES_DIR), $(HEADER))
INCLUDES = -I$(HEADER_FILES)

#Files

SRCS_FILES = $(addprefix $(SRCS_DIR), $(SRCS))

OBJS_FILES = $(SRCS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_FILES)
	make -C $(LIBFT_DIR)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS_FILES)
	ranlib $(NAME)

%.o: %.c $(HEADER_FILES) Makefile
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(RM_FLAGS) $(OBJS_FILES)

fclean: clean
	$(RM) $(RM_FLAGS) $(NAME)

re: fclean all

.PHONY: clean fclean re all
