# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upopee <upopee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 11:42:57 by upopee            #+#    #+#              #
#    Updated: 2017/06/28 21:45:47 by upopee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- VARIABLES --

# Name
NAME = libgraphic.a

# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -Werror -Wextra $(INCLUDES) -g -O0

# Sources path
VPATH =$(COLOR_SRCS_DIR):$(VERTEX_SRCS_DIR):$(VECTOR_SRCS_DIR):$(MATRIX_SRCS_DIR):$(QUAT_SRCS_DIR):$(MLX_SRCS_DIR):$(CAMERA_SRCS_DIR):$(MATH_SRCS_DIR):$(DEBUG_SRCS_DIR)

# Includes path
INCLUDES = -I ./inc

# Sources files
LIB_FILES =		mlx_init \
				mlx_end \
				pixel_to_img \
				\
				ft_rgb_default \
				ft_rgba_default \
				ft_rgb_set \
				ft_rgba_set \
				ft_rgba_add \
				ft_rgba_sub \
				ft_itorgb \
				ft_itorgba \
				ft_rgbtoi \
				ft_rgbatoi \
				ft_rgb_lerp \
				ft_rgba_lerp \
				ft_icolor_lerp \
				\
				ft_to_ver2i \
				ft_ver2i_add \
				ft_ver2i_sub \
				ft_ver2i_div \
				ft_ver2i_mul \
				ft_ver2i_opp \
				\
				ft_to_ver2f \
				ft_ver2f_add \
				ft_ver2f_sub \
				ft_ver2f_div \
				ft_ver2f_mul \
				ft_ver2f_opp \
				\
				ft_to_ver3i \
				ft_ver3i_add \
				ft_ver3i_sub \
				ft_ver3i_div \
				ft_ver3i_mul \
				ft_ver3i_opp \
				\
				ft_to_ver3f \
				ft_ver3f_add \
				ft_ver3f_sub \
				ft_ver3f_div \
				ft_ver3f_mul \
				ft_ver3f_opp \
				ft_ver3i_to_ver3f \
				\
				ft_to_vec2 \
				ft_vec2_add \
				ft_vec2_sub \
				ft_vec2_scale \
				ft_vec2_opp \
				ft_vec2_dotprod \
				ft_vec2_magn\
				ft_vec2_normalize \
				ft_vec2_equal \
				\
				ft_to_vec3 \
				ft_vec3_add \
				ft_vec3_sub \
				ft_vec3_scale \
				ft_vec3_opp \
				ft_vec3_crossprod \
				ft_vec3_dotprod \
				ft_vec3_magn\
				ft_vec3_normalize \
				ft_vec3_equal \
				\
				ft_to_quat \
				ft_quat_add \
				ft_quat_add_n \
				ft_quat_sub \
				ft_quat_sub_n \
				ft_quat_mul \
				ft_quat_scale \
				ft_quat_opp \
				ft_quat_inv \
				ft_quat_crossprod \
				ft_quat_dotprod \
				ft_quat_magn\
				ft_quat_normalize \
				ft_quat_dotnormalize \
				ft_rot_to_quat \
				ft_quat_to_rot \
				ft_quat_to_spheric_rot \
				ft_spheric_rot_to_quat \
				ft_quat_equal \
				\
				ft_gen_identity_mat4 \
				ft_gen_translate_mat4 \
				ft_gen_scale_mat4 \
				ft_gen_rotation_mat4 \
				ft_gen_euler_rotation_mat4 \
				ft_mat4_premul_vec3 \
				ft_mat4_postmul_vec3 \
				ft_mat4_premul_quat \
				ft_mat4_postmul_quat \
				ft_mat4_premul_norm_quat \
				ft_mat4_postmul_norm_quat \
				ft_mat4_mul_mat4 \
				ft_transpose_mat4 \
				ft_mat4_to_quat \
				ft_quat_to_mat4 \
				ft_quat_to_vec3 \
				ft_vec3_to_quat \
				\
				ft_init_cam \
				ft_init_cam_new \
				ft_lookat \
				ft_view_mat4 \
				ft_persproj_mat4 \
				ft_orthoproj_mat4 \
				\
				mlx_bresenham \
				fast_line \
				\
				ft_spheric_to_vec3 \
				ft_spheric_to_quat \
				ft_viewport_tlc \
				ft_viewport_llc \
				ft_to_frange \
				\
				print_vector \
				print_matrix \
				print_camera \

COLOR_SRCS = $(patsubst %,$(COLOR_SRCS_DIR)/%,$(LIB_FILES:=.c))
COLOR_SRCS_DIR = ./src/color_utils

VERTEX_SRCS = $(patsubst %,$(VERTEX_SRCS_DIR)/%,$(LIB_FILES:=.c))
VERTEX_SRCS_DIR = ./src/vertex_utils

VECTOR_SRCS = $(patsubst %,$(VECTOR_SRCS_DIR)/%,$(LIB_FILES:=.c))
VECTOR_SRCS_DIR = ./src/vector_utils

MATRIX_SRCS = $(patsubst %,$(MATRIX_SRCS_DIR)/%,$(LIB_FILES:=.c))
MATRIX_SRCS_DIR = ./src/matrix_utils

QUAT_SRCS = $(patsubst %,$(QUAT_SRCS_DIR)/%,$(LIB_FILES:=.c))
QUAT_SRCS_DIR = ./src/quaternion_utils

MLX_SRCS = $(patsubst %,$(MLX_SRCS_DIR)/%,$(LIB_FILES:=.c))
MLX_SRCS_DIR = ./src/mlx_utils

CAMERA_SRCS = $(patsubst %,$(CAMERA_SRCS_DIR)/%,$(LIB_FILES:=.c))
CAMERA_SRCS_DIR = ./src/camera_utils

MATH_SRCS = $(patsubst %,$(MATH_SRCS_DIR)/%,$(LIB_FILES:=.c))
MATH_SRCS_DIR = ./src/math_utils

DEBUG_SRCS = $(patsubst %,$(DEBUG_SRCS_DIR)/%,$(LIB_FILES:=.c))
DEBUG_SRCS_DIR = ./src/debug_utils

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
