# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upopee <upopee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 11:42:57 by upopee            #+#    #+#              #
#    Updated: 2018/05/14 01:32:47 by upopee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- VARIABLES --

NAME =				libgraphic
LIB =				$(NAME).a
CC =				gcc
CFLAGS =			-Wall -Werror -Wextra
CPPFLAGS =			$(INCLUDES)
DEPFLAGS =			-MMD

SHELL =				/bin/bash
AR =				ar -rcs
MKDIR =				mkdir -p
RMDIR =				rm -rf
RM =				rm -f
NORM =				norminette

VPATH =				$(MLXTOOLS_DIR)/$(SRC_DIR):\
					$(COLOR_DIR)/$(SRC_DIR):\
					$(VERTEX_DIR)/$(SRC_DIR):\
					$(VECTOR_DIR)/$(SRC_DIR):\
					$(QUATER_DIR)/$(SRC_DIR):\
					$(MATRIX_DIR)/$(SRC_DIR):\
					$(CAMERA_DIR)/$(SRC_DIR):\
					$(GMATHS_DIR)/$(SRC_DIR):\
					$(DEBUG_DIR)/$(SRC_DIR):\

INCLUDES =			-I $(MLXTOOLS_DIR)/$(INC_DIR) \
					-I $(COLOR_DIR)/$(INC_DIR) \
					-I $(VERTEX_DIR)/$(INC_DIR) \
					-I $(VECTOR_DIR)/$(INC_DIR) \
					-I $(QUATER_DIR)/$(INC_DIR) \
					-I $(MATRIX_DIR)/$(INC_DIR) \
					-I $(CAMERA_DIR)/$(INC_DIR) \
					-I $(GMATHS_DIR)/$(INC_DIR) \
					-I $(DEBUG_DIR)/$(INC_DIR) \

SOURCES =			$(MLXTOOLS_SRC) \
					$(COLOR_SRC) \
					$(VERTEX_SRC) \
					$(VECTOR_SRC) \
					$(QUATER_SRC) \
					$(MATRIX_SRC) \
					$(CAMERA_SRC) \
					$(GMATHS_SRC) \
					$(DEBUG_SRC) \

LIBGR_OBJS =		$(patsubst %,$(OBJ_DIR)/%,$(notdir $(SOURCES:.c=.o)))

ALL_OBJS =			$(LIBGR_OBJS)

# -- SUB-LIBRARIES --

LDLIBS =		-lmlx
LDFLAGS =		-L$(MLX_DIR)

MLX_DIR =		mlx
MLX_DEP =		$(LIBFT_DIR)/libmlx.a
MLX_OBJ =		$(patsubst %,$(MLX_DIR)/%,$(MLX_FILES:=.o))
MLX_FILES =		mlx_init_loop \
				mlx_int_str_to_wordtab \
				mlx_new_image \
				mlx_new_window \
				mlx_shaders \
				mlx_xpm \

# -- PATHS NAMES --

SRC_DIR =			sources
INC_DIR =			includes
OBJ_DIR =			.objects

# -- FILES --

MLXTOOLS_DIR =		mlx_tools
MLXTOOLS_SRC =		$(patsubst %,$(MLXTOOLS_DIR)/$(SRC_DIR)/%,$(MLXTOOLS_FILES:=.c))
MLXTOOLS_FILES =	mlx_init \
					mlx_end \
					mlx_bresenham \
					fast_line \
					pixel_to_img \

COLOR_DIR =			colors
COLOR_SRC =			$(patsubst %,$(COLOR_DIR)/$(SRC_DIR)/%,$(COLOR_FILES:=.c))
COLOR_FILES =		ft_rgb_default \
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

VERTEX_DIR =		vertex
VERTEX_SRC =		$(patsubst %,$(VERTEX_DIR)/$(SRC_DIR)/%,$(VERTEX_FILES:=.c))
VERTEX_FILES =		ft_to_ver2i \
					ft_ver2i_add \
					ft_ver2i_sub \
					ft_ver2i_div \
					ft_ver2i_mul \
					ft_ver2i_opp \
					\
					ft_to_ver3i \
					ft_ver3i_add \
					ft_ver3i_sub \
					ft_ver3i_div \
					ft_ver3i_mul \
					ft_ver3i_opp \
					ft_ver3i_to_ver3f \
					\
					ft_to_ver2f \
					ft_ver2f_add \
					ft_ver2f_sub \
					ft_ver2f_div \
					ft_ver2f_mul \
					ft_ver2f_opp \
					\
					ft_to_ver3f \
					ft_ver3f_add \
					ft_ver3f_sub \
					ft_ver3f_div \
					ft_ver3f_mul \
					ft_ver3f_opp \

VECTOR_DIR =		vector
VECTOR_SRC =		$(patsubst %,$(VECTOR_DIR)/$(SRC_DIR)/%,$(VECTOR_FILES:=.c))
VECTOR_FILES =		ft_to_vec2 \
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

QUATER_DIR =		quaternions
QUATER_SRC =		$(patsubst %,$(QUATER_DIR)/$(SRC_DIR)/%,$(QUATER_FILES:=.c))
QUATER_FILES =		ft_to_quat \
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
					ft_quat_lerp \

MATRIX_DIR =		matrix
MATRIX_SRC =		$(patsubst %,$(MATRIX_DIR)/$(SRC_DIR)/%,$(MATRIX_FILES:=.c))
MATRIX_FILES =		ft_gen_identity_mat4 \
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

CAMERA_DIR =		camera
CAMERA_SRC =		$(patsubst %,$(CAMERA_DIR)/$(SRC_DIR)/%,$(CAMERA_FILES:=.c))
CAMERA_FILES =		ft_init_cam \
					ft_init_cam_new \
					ft_lookat \
					ft_view_mat4 \
					ft_persproj_mat4 \
					ft_orthoproj_mat4 \

GMATHS_DIR =		g_maths
GMATHS_SRC =		$(patsubst %,$(GMATHS_DIR)/$(SRC_DIR)/%,$(GMATHS_FILES:=.c))
GMATHS_FILES =		ft_spheric_to_vec3 \
					ft_spheric_to_quat \
					ft_viewport_tlc \
					ft_viewport_llc \
					ft_to_frange \
					ft_ver3f_proj \

DEBUG_DIR =			debug
DEBUG_SRC =			$(patsubst %,$(DEBUG_DIR)/$(SRC_DIR)/%,$(DEBUG_FILES:=.c))
DEBUG_FILES =		print_vector \
					print_matrix \
					print_camera \

# -- IMPLICIT RULES  / LINKING --

$(OBJ_DIR)/%.o: %.c Makefile
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
	@$(eval COLOR=$(shell list=(160 196 202 208 215 221 226 227 190 154 118 82 46); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
	@printf "\r> $(YELLOW)$(NAME)$(EOC) : Building objects...    %2d%% $(CNO)[`printf '#%.0s' {0..$(DONE)}`%*s]$(YELLOW)%*.*s%s$(EOC)$(ERASELN)" $(PERCENT) $(COLOR) $(TO_DO) "" $(DELTA) $(DELTA) "$(shell echo "$@" | sed 's/^.*\///')"
	@$(CC) -c $< -o $@ $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS)
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

# -- RULES --

all:
	@$(MAKE) -j $(NAME)

$(NAME): $(LIB)

$(LIB): $(MLX_DEP) $(OBJ_DIR) $(LIBGR_OBJS)
	@$(AR) $(LIB) $(LIBGR_OBJS) $(MLX_OBJ)
	@printf "\r$(ERASELN)$(GREEN_B)✓$(EOC) $(YELLOW)$(NAME)$(EOC) : Library created\n"

$(OBJ_DIR):
	@$(MKDIR) $(OBJ_DIR)

$(MLX_DEP):
	@$(MAKE) -C $(MLX_DIR)

clean:
	@if [ -e $(OBJ_DIR) ]; \
	then \
		$(RMDIR) $(OBJ_DIR); \
		printf "$(RED_B)✗$(EOC) $(YELLOW)$(NAME)$(EOC) : Objects deleted\n"; \
	fi;

fclean: clean
	@if [ -e $(LIB) ]; \
	then \
		$(RM) $(LIB); \
		printf "$(RED_B)✗$(EOC) $(YELLOW)$(NAME)$(EOC) : Library deleted\n"; \
	fi;
	@$(MAKE) -C $(MLX_DIR) clean

re: fclean
	@$(MAKE)

norm:
	@$(NORM)

.PHONY: all clean fclean re norm

-include $(ALL_OBJS:.o=.d)

# ------------------------------------------------------------------------------
# --------------------------- DISPLAY ------------------------------------------
# ------------------------------------------------------------------------------

LEN_NAME =	`printf "%s" $(NAME) |wc -c`
DELTA =		$$(echo "$$(tput cols)-54-$(LEN_NAME)"|bc)
NB =		$(words $(SOURCES))
INDEX=		0

ERASELN =	\033[K
CNO =		\033[38;5;%dm

YELLOW =	\e[31;33m
YELLOW_B =	\e[31;33;1m
GREEN =		\e[32m
GREEN_B =	\e[32;1m
RED =		\e[31m
RED_B =		\e[31;1m
WHITE =		\e[37m
WHITE_B =	\e[37;1m
EOC =		\e[0m
