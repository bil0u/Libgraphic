/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/10 22:25:10 by upopee           ###   ########.fr       */
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

# define TO_RADIAN(deg) (float)(((deg) * M_PI / 180.0f))
# define TO_DEGREE(rad) (float)(((rad) * 180.0f / M_PI))

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

typedef struct	s_vertex2
{
	int			x;
	int			y;
}				t_vertex2;

t_vertex2	*ft_vertex2_opp(t_vertex2 *v);
t_vertex2	*ft_vertex2_opp_new(t_vertex2 *v1);
t_vertex2	*ft_vertex2_add(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_add_new(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_sub(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_sub_new(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_div(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_div_new(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_mul(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2_mul_new(t_vertex2 *v1, t_vertex2 *v2);

typedef struct	s_vertex3
{
	int			x;
	int			y;
	int			z;
}				t_vertex3;

t_vertex3	*ft_vertex3_opp(t_vertex3 *v);
t_vertex3	*ft_vertex3_opp_new(t_vertex3 *v1);
t_vertex3	*ft_vertex3_add(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_add_new(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_sub(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_sub_new(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_div(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_div_new(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_mul(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3_mul_new(t_vertex3 *v1, t_vertex3 *v2);

typedef struct	s_vertex4
{
	int			x;
	int			y;
	int			z;
	float		w;
}				t_vertex4;

t_vertex4	*ft_vertex3_to4_new(t_vertex3 *v, float w);
t_vertex4	*ft_vertex3_to4(t_vertex4 *dst, t_vertex3 *v, float w);

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

t_vector2	*ft_vector2_opp(t_vector2 *v);
t_vector2	*ft_vector2_opp_new(t_vector2 *v1);
t_vector2	*ft_vector2_add(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2_add_new(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2_sub(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2_sub_new(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2_crossprod(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2_crossprod_new(t_vector2 *v1, t_vector2 *v2);
float		ft_vector2_scal(t_vector2 *v1, t_vector2 *v2);
float		ft_vector2_magn(t_vector2 *v);

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3	*ft_vector3_opp(t_vector3 *v);
t_vector3	*ft_vector3_opp_new(t_vector3 *v1);
t_vector3	*ft_vector3_add(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3_add_new(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3_sub(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3_sub_new(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3_crossprod(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3_crossprod_new(t_vector3 *v1, t_vector3 *v2);
float		ft_vector3_scal(t_vector3 *v1, t_vector3 *v2);
float		ft_vector3_magn(t_vector3 *v);

typedef struct	s_vector4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vector4;

t_vector3	*ft_vector4_to3_new(t_vector4 *v);
t_vector4	*ft_vector3_to4_new(t_vector3 *v, float *w);

typedef struct	s_matrix4i
{
	int			m[4][4];
}				t_matrix4i;

typedef struct	s_matrix4f
{
	float		m[4][4];
}				t_matrix4f;

/*
** +-------------------+
** | DRAWING FUNCTIONS |
** +-------------------+
*/

void	ft_bresenham(t_mlxenv *e, t_vertex2 v1, t_vertex2 v2);

#endif
