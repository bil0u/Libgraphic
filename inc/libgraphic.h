/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/06/26 22:00:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	IMPORTANT NOTE :
**
**	This graphics library is still in alpha phase,
**	some bugs and errors may not have been fixed yet.
*/

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H

#include <mlx.h>
#include <stdint.h>

# define ABS(x) ((x) < 0 ? -(x) : (x))
# define OPP(x) (-(x))
# define MIN(x1, x2) ((x1) < (x2) ? (x1) : (x2))
# define MAX(x1, x2) ((x1) < (x2) ? (x2) : (x1))

/*
** +----------+
** | MLX PART |
** +----------+
*/

# define MLXWIN_WIDTH_MAX 1400
# define MLXWIN_HEIGHT_MAX 800
# define MLXWIN_DEFAULT_OFFSET 50
# define MLXWIN_MARGEX (MLXWIN_WIDTH_MAX * 0.15)
# define MLXWIN_MARGEY (MLXWIN_HEIGHT_MAX * 0.15)

typedef struct	s_mlxenv
{
	void		*init_id;
}				t_mlxenv;

typedef struct	s_mlxwin
{
	void		*id;
	int			width;
	int			height;
	char		*title;
}				t_mlxwin;

typedef struct	s_mlximg
{
	void		*id;
	char		*data;
	char		*limit;
	char		*center;
	int			width;
	int			height;
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

void		pixel_to_img(t_mlximg *img, int x, int y, unsigned int color);

/*
** +------------+
** | COLOR PART |
** +------------+
*/

# define DEFAULT_RED_VALUE 0xFF
# define DEFAULT_GREEN_VALUE 0xFF
# define DEFAULT_BLUE_VALUE 0xFF
# define DEFAULT_ALPHA_VALUE 0x0

typedef struct	s_colorRGB
{
	uint8_t		blue;
	uint8_t		green;
	uint8_t		red;
}				t_colorRGB;

t_colorRGB	ft_rgb_default(void);
t_colorRGB	ft_rgb_set(uint8_t red, uint8_t green, uint8_t blue);

typedef struct	s_colorRGBA
{
	uint8_t		blue;
	uint8_t		green;
	uint8_t		red;
	uint8_t		alpha;
}				t_colorRGBA;

t_colorRGBA	ft_rgba_default(void);
t_colorRGBA	ft_rgba_set(uint8_t red, uint8_t green, uint8_t blue,
							uint8_t alpha);
t_colorRGBA	ft_rgba_add(t_colorRGBA color, t_colorRGBA add);
t_colorRGBA	ft_rgba_sub(t_colorRGBA color, t_colorRGBA sub);
t_colorRGB	ft_itorgb(int color);
t_colorRGBA	ft_itorgba(int color);
int			ft_rgbtoi(t_colorRGB color);
int			ft_rgbatoi(t_colorRGBA color);

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

# define TO_RADIAN(deg) (((deg) * M_PI) / 180.0f)
# define TO_DEGREE(rad) (((rad) * 180.0f) / M_PI)

typedef struct	s_vertex2i
{
	int			x;
	int			y;
	t_colorRGBA	color;
}				t_vertex2i;

t_vertex2i	ft_to_ver2i(int x, int y);
t_vertex2i	ft_ver2i_add(t_vertex2i v1, t_vertex2i v2);
t_vertex2i	ft_ver2i_sub(t_vertex2i v1, t_vertex2i v2);
t_vertex2i	ft_ver2i_div(t_vertex2i v1, t_vertex2i v2);
t_vertex2i	ft_ver2i_mul(t_vertex2i v1, t_vertex2i v2);
t_vertex2i	ft_ver2i_opp(t_vertex2i v);

typedef struct	s_vertex2f
{
	float		x;
	float		y;
	t_colorRGBA	color;
}				t_vertex2f;

t_vertex2f	ft_to_ver2f(float x, float y);
t_vertex2f	ft_ver2f_add(t_vertex2f v1, t_vertex2f v2);
t_vertex2f	ft_ver2f_sub(t_vertex2f v1, t_vertex2f v2);
t_vertex2f	ft_ver2f_div(t_vertex2f v1, t_vertex2f v2);
t_vertex2f	ft_ver2f_mul(t_vertex2f v1, t_vertex2f v2);
t_vertex2f	ft_ver2f_opp(t_vertex2f v);

typedef struct	s_vertex3i
{
	int			x;
	int			y;
	int			z;
	t_colorRGBA	color;
}				t_vertex3i;

t_vertex3i	ft_to_ver3i(int x, int y, int z);
t_vertex3i	ft_ver3i_add(t_vertex3i v1, t_vertex3i v2);
t_vertex3i	ft_ver3i_sub(t_vertex3i v1, t_vertex3i v2);
t_vertex3i	ft_ver3i_div(t_vertex3i v1, t_vertex3i v2);
t_vertex3i	ft_ver3i_mul(t_vertex3i v1, t_vertex3i v2);
t_vertex3i	ft_ver3i_opp(t_vertex3i v);

typedef struct	s_vertex3f
{
	float		x;
	float		y;
	float		z;
	t_colorRGBA	color;
}				t_vertex3f;

t_vertex3f	ft_to_ver3f(float x, float y, float z);
t_vertex3f	ft_ver3f_add(t_vertex3f v1, t_vertex3f v2);
t_vertex3f	ft_ver3f_sub(t_vertex3f v1, t_vertex3f v2);
t_vertex3f	ft_ver3f_div(t_vertex3f v1, t_vertex3f v2);
t_vertex3f	ft_ver3f_mul(t_vertex3f v1, t_vertex3f v2);
t_vertex3f	ft_ver3f_opp(t_vertex3f v);
t_vertex3f	ft_ver3i_to_ver3f(t_vertex3i v);

typedef struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

t_vector2	ft_to_vec2(float x, float y);
t_vector2	ft_vec2_add(t_vector2 v1, t_vector2 v2);
t_vector2	ft_vec2_sub(t_vector2 v1, t_vector2 v2);
t_vector2	ft_vec2_scale(t_vector2 v, float n);
t_vector2	ft_vec2_opp(t_vector2 v);
float		ft_vec2_dotprod(t_vector2 v1, t_vector2 v2);
float		ft_vec2_magn(t_vector2 v);
t_vector2	ft_vec2_normalize(t_vector2 v);
int			ft_vec2_equal(t_vector2 v1, t_vector2 v2);

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3	ft_to_vec3(float x, float y, float z);
t_vector3	ft_vec3_add(t_vector3 v1, t_vector3 v2);
t_vector3	ft_vec3_sub(t_vector3 v1, t_vector3 v2);
t_vector3	ft_vec3_scale(t_vector3 v, float n);
t_vector3	ft_vec3_opp(t_vector3 v);
t_vector3	ft_vec3_crossprod(t_vector3 v1, t_vector3 v2);
float		ft_vec3_dotprod(t_vector3 v1, t_vector3 v2);
float		ft_vec3_magn(t_vector3 v);
t_vector3	ft_vec3_normalize(t_vector3 v);
int			ft_vec3_equal(t_vector3 v1, t_vector3 v2);

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

t_quater	ft_to_quat(float x, float y, float z, float w);
t_quater	ft_quat_add(t_quater q1, t_quater q2);
t_quater	ft_quat_add_n(t_quater q, float n);
t_quater	ft_quat_sub(t_quater q1, t_quater q2);
t_quater	ft_quat_sub_n(t_quater q1, float n);
t_quater	ft_quat_mul(t_quater q1, t_quater q2);
t_quater	ft_quat_scale(t_quater q, float n);
t_quater	ft_quat_opp(t_quater q);
t_quater	ft_quat_inv(t_quater q);

t_quater	ft_quat_crossprod(t_quater q1, t_quater q2);
float		ft_quat_dotprod(t_quater q1, t_quater q2);
float		ft_quat_magn(t_quater q);
t_quater	ft_quat_normalize(t_quater q);
t_quater	ft_quat_dotnormalize(t_quater q);

t_quater	ft_rot_to_quat(float a_x, float a_y, float a_z, float angle);
float		ft_quat_to_rot(t_quater qr, float *a_x, float *a_y, float *a_z);
void		ft_quat_to_spheric_rot(t_quater q, float *lon,
									float *lat, float *angle);
t_quater	ft_spheric_rot_to_quat(float lat, float lon, float angle);

int			ft_quat_equal(t_quater q1, t_quater q2);

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
t_matrix4	ft_gen_translate_mat4(t_vector3 v);
t_matrix4	ft_gen_scale_mat4(t_vector3 v);
t_matrix4	ft_gen_rotation_mat4(float deg_angle, t_vector3 v);
t_matrix4	ft_gen_euler_rotation_mat4(float deg_x, float deg_y, float deg_z);

t_vector3	ft_mat4_premul_vec3(t_matrix4 m, t_vector3 v);
t_vector3	ft_mat4_postmul_vec3(t_vector3 v, t_matrix4 m);
t_quater	ft_mat4_premul_quat(t_matrix4 m, t_quater q);
t_quater	ft_mat4_postmul_quat(t_quater q, t_matrix4 m);
t_quater	ft_mat4_premul_norm_quat(t_matrix4 m, t_quater q);
t_quater	ft_mat4_postmul_norm_quat(t_quater q, t_matrix4 m);
t_matrix4	ft_mat4_mul_mat4(t_matrix4 m1, t_matrix4 m2);
t_matrix4	ft_transpose_mat4(t_matrix4 m);

t_quater	ft_mat4_to_quat(t_matrix4 m);
t_matrix4	ft_quat_to_mat4(t_quater q);
t_vector3	ft_quat_to_vec3(t_quater q);
t_quater	ft_vec3_to_quat(t_vector3 v, float w);

/*
** +-------------+
** | CAMERA PART |
** +-------------+
*/

# define DFLT_VANGLE 70.0
# define DFLT_NEAR 0.1
# define DFLT_FAR 100.0

typedef struct	s_camera
{
	t_vector3	eye;
	t_vector3	center;
	t_vector3	up;
	t_vector3	forward;
	t_vector3	side;
	float		view_angle;
	float		aspect_ratio;
	float		near;
	float		far;
	float		top_limit;
	float		bottom_limit;
	float		right_limit;
	float		left_limit;
	t_matrix4	view_matrix;
	t_matrix4	projection_matrix;
}				t_camera;

t_camera	ft_init_cam(float fov, float ratio, float near, float far);
t_camera	*ft_init_cam_new(float fov, float ratio, float near, float far);
t_matrix4	ft_lookat(t_camera *cam, t_vector3 eye,
						t_vector3 center, t_vector3 up);
t_matrix4	ft_view_mat4(t_vector3 eye, t_vector3 up,
							t_vector3 side, t_vector3 forward);
t_matrix4	ft_persproj_mat4(float fov, float near, float far, float ratio);
t_matrix4	ft_orthoproj_mat4(float fov, float near, float far, float ratio);

/*
** +-------------------+
** | DRAWING FUNCTIONS |
** +-------------------+
*/

void	mlx_bresenham(t_mlximg *img, t_vertex2i a, t_vertex2i b);
void	fast_line(t_mlximg *img, t_vertex2i a, t_vertex2i b);

/*
** +----------------+
** | MATH FUNCTIONS |
** +----------------+
*/

typedef struct	s_frange
{
	float		min;
	float		max;
}				t_frange;

typedef struct	s_irange
{
	int			min;
	int			max;
}				t_irange;

t_vector3	ft_spheric_to_vec3(float theta, float phi);
t_quater	ft_spheric_to_quat(float theta, float phi);
t_vertex2i	ft_viewport_tlc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height);
t_vertex2i	ft_viewport_llc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height);
float		ft_to_frange(t_frange in, t_frange out, float x);

/*
** +-----------------+
** | DEBUG FUNCTIONS |
** +-----------------+
*/

# define FLOAT_PRECISION 2

void	print_ver2i(t_vertex2i v);
void	print_vec2(t_vector2 v);
void	print_vec3(t_vector3 v);
void	print_quat(t_quater v);
void	print_mat4(t_matrix4 m, char *name);
void	print_camera(t_camera cam);

#endif
