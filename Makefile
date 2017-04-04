# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upopee <upopee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 11:42:57 by upopee            #+#    #+#              #
#*   Updated: 2017/04/04 14:58:16 by upopee           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# -- VARIABLES --

# Name
NAME = libgraphic.a

# Compiler
CC = gcc

# Flags
CFLAGS = -c -Wall -Werror -Wextra

# Sources path
VPATH = ./srcs/

# Includes path
LIB_INCLUDES = -I ./includes
INCLUDES = $(LIB_INCLUDES)

# Sources files
LIB_SRCS =		.c \

# Objects
LIB_OBJECTS = $(LIB_SRCS:.c=.o)
OBJECTS = $(LIB_OBJECTS)

# -- RULES --

all: $(NAME)
	echo >> /dev/null

$(NAME):
	printf "> \033[31;33;1m$(NAME)\033[0m : \033[32mCreating objects\033[0m "
	make obj
	printf "\n"
	printf "> \033[31;33;1m$(NAME)\033[0m : \033[32mCreating Library\033[0m "
	ar rc $(NAME) $(OBJECTS)
	ar -s $(NAME)
	printf "\t\t\033[37;1m[\033[32;1mDONE\033[0m\033[37;1m]\033[0m\n"

obj: $(OBJECTS)
	echo >> /dev/null

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^
	printf "\033[32m.\033[0m"

clean:
	printf "> \033[31;33;1m$(NAME)\033[0m : \033[31mDeleting objects\033[0m "
	rm -f $(OBJECTS)
	printf "\t\t\033[37;1m[\033[31;1mX\033[0m\033[37;1m]\033[0m\n"

fclean: clean
	printf "> \033[31;33;1m$(NAME)\033[0m : \033[31mDeleting binary\033[0m "
	rm -f $(NAME)
	printf "\t\t\033[37;1m[\033[31;1mX\033[0m\033[37;1m]\033[0m\n"

re: fclean all

lib: all clean

# This rule allow the library build process to complete even if there are
# files named 'all, clean, fclean, re, lib' in the working directory

.PHONY: all clean fclean re lib

.SILENT: all obj clean fclean re lib $(NAME) $(OBJECTS)
