/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/19 04:42:09 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H

#include "/usr/local/include/mlx.h"

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

typedef struct	s_mlxenv
{
	void		*init_id;
}				t_mlxenv;

typedef struct	s_mlxwin
{
	void		*id;
	int			sz_x;
	int			sz_y;
	char		*title;
}				t_mlxwin;

typedef struct	s_mlximg
{
	void		*id;
	char		*data;
	char		*limit;
	char		*center;
	int			sz_x;
	int			sz_y;
	int			bpp;
	int			sz_line;
	int			endian;
}				t_mlximg;

t_mlxenv	*init_mlxenv(void);
void		del_mlxenv(t_mlxenv *m_env);

t_mlxwin	*init_mlxwin(void *mlx_id, int sz_x, int sz_y, char *title);
void		del_mlxwin(void *mlx_id, t_mlxwin *m_win);

t_mlximg	*init_mlximg(void *mlx_id, int sz_x, int sz_y);
void		del_mlximg(void *mlx_id, t_mlximg *m_img);

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
** +----------------------+
** | VERTEX / VECTOR PART |
** +----------------------+
*/

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

typedef struct	s_vertex2i
{
	int			x;
	int			y;
}				t_vertex2i;

t_vertex2i	ft_ver2i_add(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_sub(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_div(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_mul(t_vertex2i *v1, t_vertex2i *v2);
t_vertex2i	ft_ver2i_opp(t_vertex2i *v);

typedef struct	s_vertex2f
{
	float		x;
	float		y;
}				t_vertex2f;

t_vertex2f	ft_ver2f_add(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_sub(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_div(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_mul(t_vertex2f *v1, t_vertex2f *v2);
t_vertex2f	ft_ver2f_opp(t_vertex2f *v);

typedef struct	s_vertex3i
{
	int			x;
	int			y;
	int			z;
}				t_vertex3i;

t_vertex3i	ft_ver3i_add(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_sub(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_div(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_mul(t_vertex3i *v1, t_vertex3i *v2);
t_vertex3i	ft_ver3i_opp(t_vertex3i *v);

typedef struct	s_vertex3f
{
	float		x;
	float		y;
	float		z;
}				t_vertex3f;

t_vertex3f	ft_ver3f_add(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_sub(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_div(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_mul(t_vertex3f *v1, t_vertex3f *v2);
t_vertex3f	ft_ver3f_opp(t_vertex3f *v);
t_vertex3f	ft_ver3i_to_ver3f(t_vertex3i *v);

typedef struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

t_vector2	ft_vec2_add(t_vector2 *v1, t_vector2 *v2);
t_vector2	ft_vec2_sub(t_vector2 *v1, t_vector2 *v2);
t_vector2	ft_vec2_opp(t_vector2 *v);
float		ft_vec2_scalprod(t_vector2 *v1, t_vector2 *v2);
float		ft_vec2_norm(t_vector2 *v);
void		ft_vec2_normalize(t_vector2 *v);

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3	ft_vec3_add(t_vector3 *v1, t_vector3 *v2);
t_vector3	ft_vec3_sub(t_vector3 *v1, t_vector3 *v2);
t_vector3	ft_vec3_opp(t_vector3 *v);
t_vector3	ft_vec3_crossprod(t_vector3 *v1, t_vector3 *v2);
float		ft_vec3_scalprod(t_vector3 *v1, t_vector3 *v2);
float		ft_vec3_norm(t_vector3 *v);
void		ft_vec3_normalize(t_vector3 *v);

/*
** +-----------------+
** | QUATERNION PART |
** +-----------------+
*/

typedef struct	s_quater
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_quater;

t_quater	ft_quat_add(t_quater *q1, t_quater *q2);
t_quater	ft_quat_add_n(t_quater *q, float n);
t_quater	ft_quat_sub(t_quater *q1, t_quater *q2);
t_quater	ft_quat_sub_n(t_quater *q1, float n);
t_quater	ft_quat_mul(t_quater *q1, t_quater *q2);
t_quater	ft_quat_mul_n(t_quater *q, float n);
t_quater	ft_quat_opp(t_quater *q);
t_quater	ft_quat_inv(t_quater *q);

t_quater	ft_quat_crossprod(t_quater *q1, t_quater *q2);
float		ft_quat_scalprod(t_quater *q1, t_quater *q2);
float		ft_quat_norm(t_quater *q);
void		ft_quat_normalize(t_quater *q);

t_quater	ft_rot_to_quat(float a_x, float a_y, float a_z, float angle);
float		ft_quat_to_rot(t_quater *qr, float *a_x, float *a_y, float *a_z);
void		ft_quat_to_spheric_rot(t_quater *q, float *lon,
									float *lat, float *angle);
t_quater	ft_spheric_rot_to_quat(float lat, float lon, float angle);

int			ft_quat_equal(t_quater *q1, t_quater *q2);

/*
** +-------------+
** | MATRIX PART |
** +-------------+
*/

typedef struct	s_matrix4
{
	float		array[4][4];
}				t_matrix4;

t_matrix4	ft_gen_identity_mat4(void);
t_matrix4	ft_gen_translate_mat4(float x, float y, float z);
t_matrix4	ft_gen_scale_mat4(float x, float y, float z);
t_matrix4	ft_gen_rotation_mat4(float deg_angle, float x, float y, float z);

t_quater	ft_mat4_mul_quat(t_matrix4 *m, t_quater *q);
t_matrix4	ft_mat4_mul_mat4(t_matrix4 *m1, t_matrix4 *m2);
t_matrix4	ft_transpose_mat4(t_matrix4 *m);

t_quater	ft_mat4_to_quat(t_matrix4 *m);
t_matrix4	ft_quat_to_mat4(t_quater *q);
t_vector3	ft_quat_to_vec3(t_quater *q);
t_quater	ft_vec3_to_quat(t_vector3 *v, float w);

/*
** +-------------+
** | CAMERA PART |
** +-------------+
*/

# define DFLT_VANGLE 70.0
# define DFLT_NEAR 0.0001
# define DFLT_FAR 1000.0

typedef struct	s_camera
{
	t_quater	eye;
	t_quater	center;
	t_quater	up;
	t_quater	forward;
	t_quater	side;
	float		view_angle;
	float		aspect_ratio;
	float		near;
	float		far;
}				t_camera;

t_camera	ft_init_camera(float view_angle, float near, float far);
t_camera	*ft_init_camera_new(float view_angle, float near, float far);
t_matrix4	ft_lookat(t_camera *cam, t_quater *eye,
										t_quater *center, t_quater *up);

/*
** +-------------------+
** | DRAWING FUNCTIONS |
** +-------------------+
*/

void	mlx_bresenham(void *mlx_id, void *win_id, t_vertex2i v1, t_vertex2i v2);

/*
** +-----------------+
** | DEBUG FUNCTIONS |
** +-----------------+
*/

# define FLOAT_PRECISION 2

void	print_vec2(t_vector2 *v);
void	print_vec3(t_vector3 *v);
void	print_quat(t_quater *v);

void	print_mat4(t_matrix4 *m, char *name);

#endif
