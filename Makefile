# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upopee <upopee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 11:42:57 by upopee            #+#    #+#              #
#*   Updated: 2017/04/04 20:50:04 by upopee           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# -- VARIABLES --

# Name
NAME = libgraphic.a

# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -Werror -Wextra $(INCLUDES)

# Sources path
VPATH = ./src

# Includes path
INCLUDES = -I ./inc

# Sources files
LIB_FILES =		ft_bresenham \

LIB_SRCS = $(patsubst %,$(LIB_SRCS_DIR)/%,$(LIB_FILES:=.c))
LIB_SRCS_DIR = ./src

# Objects
OBJECTS = $(patsubst %,$(OBJ_DIR)/%,$(LIB_FILES:=.o))
OBJ_DIR = ./obj

# -- RULES --

all: prep $(NAME)

$(NAME):
	printf "> \e[31;33;1m$(NAME)\e[0m : \e[32mCreating objects\e[0m "
	make obj
	printf "\n"
	printf "> \e[31;33;1m$(NAME)\e[0m : \e[32mCreating Library\e[0m "
	ar rc $(NAME) $(OBJECTS)
	ar -s $(NAME)
	printf "\t\e[37;1m[\e[32;1mDONE\e[0m\e[37;1m]\e[0m\n"

obj: $(OBJECTS)
	echo >> /dev/null

$(OBJ_DIR)/%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)
	printf "\e[32m.\e[0m"

clean:
	printf "> \e[31;33;1m$(NAME)\e[0m : \e[31mDeleting objects\e[0m "
	rm -rf $(OBJ_DIR)
	printf "\t\e[37;1m[\e[31;1mX\e[0m\e[37;1m]\e[0m\n"

fclean: clean
	printf "> \e[31;33;1m$(NAME)\e[0m : \e[31mDeleting binary\e[0m "
	rm -f $(NAME)
	printf "\t\e[37;1m[\e[31;1mX\e[0m\e[37;1m]\e[0m\n"

re: fclean all

lib: all clean

prep:
	mkdir -p $(OBJ_DIR)

# This rule allow the library build process to complete even if there are
# files named 'all, clean, fclean, re, lib' in the working directory

.PHONY: all obj clean fclean re lib prep

.SILENT: all obj clean fclean re lib prep $(NAME) $(OBJECTS)
