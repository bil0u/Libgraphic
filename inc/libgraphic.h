/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/14 05:00:01 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H

#include <mlx.h>

#ifndef M_PI
# define M_PI 3.14159265358979323846f
#endif
#ifndef M_PI_2
# define M_PI_2 1.57079632679489661923f
#endif
#ifndef M_PI_4
# define M_PI_4 0.785398163397448309616f
#endif
#ifndef M_1_PI
# define M_1_PI 0.318309886183790671538f
#endif
#ifndef M_2_PI
# define M_2_PI 0.636619772367581343076f
#endif
#ifndef M_2_SQRTPI
# define M_2_SQRTPI 1.12837916709551257390f
#endif

# define TO_RADIAN(deg) (deg * M_PI / 180.0f)
# define TO_DEGREE(rad) (rad * 180.0f / M_PI)

/*
** +----------+
** | MLX PART |
** +----------+
*/

# define MLXWIN_SIZEX_MAX 2300
# define MLXWIN_SIZEY_MAX 1400
# define MLXWIN_DEFAULT_OFFSET 50
# define MLXWIN_MARGEX (MLXWIN_SIZEX_MAX / 10)
# define MLXWIN_MARGEY (MLXWIN_SIZEY_MAX / 10)

typedef struct	s_mlxwin
{
	void		*id;
	int			sz_x;
	int			sz_y;
}				t_mlxwin;

typedef struct	s_mlximg
{
	void		*id;
	int			sz_x;
	int			sz_y;
	int			bpp;
	int			sz_line;
	int			endian;
}				t_mlximg;

typedef struct	s_mlxenv
{
	void		*mlx_id;
	t_mlxwin	win;
	t_mlximg	img1;
}				t_mlxenv;

/*
** +------------+
** | COLOR PART |
** +------------+
*/

typedef struct	s_colorRGB
{
	int			red;
	int			green;
	int			blue;
}				t_colorRGB;

typedef struct	s_colorCMJN
{
	int			cyan;
	int			magenta;
	int			yellow;
	int			black;
}				t_colorCMJN;

/*
** +-------------+
** | VERTEX PART |
** +-------------+
*/

typedef struct	s_vertex2i
{
	int			x;
	int			y;
}				t_vertex2i;

typedef struct	s_vertex2f
{
	float		x;
	float		y;
}				t_vertex2f;

typedef struct	s_vertex3i
{
	int			x;
	int			y;
	int			z;
}				t_vertex3i;

typedef struct	s_vertex3f
{
	float		x;
	float		y;
	float		z;
}				t_vertex3f;

t_vertex2i	ft_ver2i_opp(t_vertex2i *v);
t_vertex2i	ft_ver2i_add(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_sub(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_div(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_mul(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	*ft_ver2i_opp_new(t_vertex2i *v1);
t_vertex2i	*ft_ver2i_add_new(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	*ft_ver2i_sub_new(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	*ft_ver2i_div_new(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	*ft_ver2i_mul_new(t_vertex2i *v1, t_vertex2i *v2);

t_vertex2f	ft_ver2f_opp(t_vertex2f *v);
t_vertex2f	ft_ver2f_add(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_sub(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_div(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_mul(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	*ft_ver2f_opp_new(t_vertex2f *v1);
t_vertex2f	*ft_ver2f_add_new(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	*ft_ver2f_sub_new(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	*ft_ver2f_div_new(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	*ft_ver2f_mul_new(t_vertex2f *v1, t_vertex2f *v2);

t_vertex3i	ft_ver3i_opp(t_vertex3i *v);
t_vertex3i	ft_ver3i_add(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_sub(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_div(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_mul(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	*ft_ver3i_opp_new(t_vertex3i *v1);
t_vertex3i	*ft_ver3i_add_new(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	*ft_ver3i_sub_new(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	*ft_ver3i_div_new(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	*ft_ver3i_mul_new(t_vertex3i *v1, t_vertex3i *v2);

t_vertex3f	ft_ver3f_opp(t_vertex3f *v);
t_vertex3f	ft_ver3f_add(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_sub(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_div(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_mul(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	*ft_ver3f_opp_new(t_vertex3f *v1);
t_vertex3f	*ft_ver3f_add_new(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	*ft_ver3f_sub_new(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	*ft_ver3f_div_new(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	*ft_ver3f_mul_new(t_vertex3f *v1, t_vertex3f *v2);

t_vertex3f	ft_ver3i_to_ver3f(t_vertex3i *v);
t_vertex3f	*ft_ver3i_to_ver3f_new(t_vertex3i *v);

/*
** +-------------+
** | VECTOR PART |
** +-------------+
*/

typedef struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

typedef struct	s_vector4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vector4;

t_vector2	ft_vec2_opp(t_vector2 *v);
t_vector2	ft_vec2_add(t_vector2 *v1, t_vector2 *v2);
t_vector2	ft_vec2_sub(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vec2_opp_new(t_vector2 *v1);
t_vector2	*ft_vec2_add_new(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vec2_sub_new(t_vector2 *v1, t_vector2 *v2);
float		ft_vec2_scal(t_vector2 *v1, t_vector2 *v2);
float		ft_vec2_magn(t_vector2 *v);

t_vector3	ft_vec3_opp(t_vector3 *v);
t_vector3	ft_vec3_add(t_vector3 *v1, t_vector3 *v2);
t_vector3	ft_vec3_sub(t_vector3 *v1, t_vector3 *v2);
t_vector3	ft_vec3_crossprod(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vec3_opp_new(t_vector3 *v1);
t_vector3	*ft_vec3_add_new(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vec3_sub_new(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vec3_crossprod_new(t_vector3 *v1, t_vector3 *v2);
float		ft_vec3_scal(t_vector3 *v1, t_vector3 *v2);
float		ft_vec3_magn(t_vector3 *v);

t_vector3	*ft_vec4_to_vec3_new(t_vector4 *v);
t_vector4	*ft_vec3_to_vec4_new(t_vector3 *v, float w);

t_vector4	ft_ver3i_to_vec4(t_vertex3i *v, float w);
t_vector4	ft_ver3f_to_vec4(t_vertex3f *v, float w);
t_vector4	*ft_ver3i_to_vec4_new(t_vertex3i *v, float w);
t_vector4	*ft_ver3f_to_vec4_new(t_vertex3f *v, float w);

/*
** +-------------+
** | MATRIX PART |
** +-------------+
*/

typedef struct	s_matrix
{
	float		array[4][4];
}				t_matrix4;

t_matrix4	ft_mat4_id(void);
t_matrix4	ft_gen_translate_mat4(float x, float y, float z);
t_matrix4	ft_gen_scale_mat4(float x, float y, float z);
t_matrix4	ft_gen_rotation_mat4(float deg_angle, float x, float y, float z);
t_vector4	ft_mat4_mul_vec4(t_matrix4 *m, t_vector4 *v);
t_matrix4	ft_mat4_mul_mat4(t_matrix4 *m1, t_matrix4 *m2);
t_vector4	*ft_mat4_mul_vec4_new(t_matrix4 *m, t_vector4 *v);
t_matrix4	*ft_mat4_mul_mat4_new(t_matrix4 *m1, t_matrix4 *m2);

/*
** +-------------+
** | CAMERA PART |
** +-------------+
*/

typedef struct	s_camera
{
	t_vertex3f	position;
	t_vector4	view_direction;
	t_vector4	up_direction;
	float		view_angle;
	float		near;
	float		far;
}				t_camera;

/*
** +-------------------+
** | DRAWING FUNCTIONS |
** +-------------------+
*/

void	mlx_bresenham(t_mlxenv *e, t_vertex2i v1, t_vertex2i v2);

/*
** +-----------------+
** | DEBUG FUNCTIONS |
** +-----------------+
*/

void	print_vec2(t_vector2 *v);
void	print_vec3(t_vector3 *v);
void	print_vec4(t_vector4 *v);

void	print_mat4(t_matrix4 *m, char *name);

#endif
