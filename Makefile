# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upopee <upopee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 11:42:57 by upopee            #+#    #+#              #
#*   Updated: 2017/04/06 06:09:54 by upopee           ###   ########.fr       *#
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
VPATH =$(VERTEX_SRCS_DIR):$(VECTOR_SRCS_DIR):$(MATRIX_SRCS_DIR):$(MLX_SRCS_DIR)

# Includes path
INCLUDES = -I ./inc

# Sources files
LIB_FILES =		ft_vertex2opp \
				ft_vertex2opp_new \
				ft_vertex2add \
				ft_vertex2add_new \
				ft_vertex2sub \
				ft_vertex2sub_new \
				ft_vertex2div \
				ft_vertex2div_new \
				ft_vertex2mul \
				ft_vertex2mul_new \
				\
				ft_vertex3opp \
				ft_vertex3opp_new \
				ft_vertex3add \
				ft_vertex3add_new \
				ft_vertex3sub \
				ft_vertex3sub_new \
				ft_vertex3div \
				ft_vertex3div_new \
				ft_vertex3mul \
				ft_vertex3mul_new \
				\
				ft_vertex3to4_new \
				ft_vertex3to4 \
				\
				ft_vector2opp \
				ft_vector2opp_new \
				ft_vector2add \
				ft_vector2add_new \
				ft_vector2sub \
				ft_vector2sub_new \
				ft_vector2crossprod \
				ft_vector2crossprod_new \
				ft_vector2scal \
				ft_vector2magn \
				\
				ft_vector3opp \
				ft_vector3opp_new \
				ft_vector3add \
				ft_vector3add_new \
				ft_vector3sub \
				ft_vector3sub_new \
				ft_vector3crossprod \
				ft_vector3crossprod_new \
				ft_vector3scal \
				ft_vector3magn \
				ft_vector4to3_new \
				\
				ft_vector3to4_new \
				\
				ft_bresenham \

VERTEX_SRCS = $(patsubst %,$(VERTEX_SRCS_DIR)/%,$(LIB_FILES:=.c))
VERTEX_SRCS_DIR = ./src/vertex_functions

VECTOR_SRCS = $(patsubst %,$(VECTOR_SRCS_DIR)/%,$(LIB_FILES:=.c))
VECTOR_SRCS_DIR = ./src/vector_functions

MATRIX_SRCS = $(patsubst %,$(MATRIX_SRCS_DIR)/%,$(LIB_FILES:=.c))
MATRIX_SRCS_DIR = ./src/matrix_functions

MLX_SRCS = $(patsubst %,$(MLX_SRCS_DIR)/%,$(LIB_FILES:=.c))
MLX_SRCS_DIR = ./src/mlx_drawing_functions

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
