/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:14:26 by upopee           ###   ########.fr       */
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

t_vertex2	*ft_vertex2opp(t_vertex2 *v);
t_vertex2	*ft_vertex2opp_new(t_vertex2 *v1);
t_vertex2	*ft_vertex2add(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2add_new(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2sub(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2sub_new(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2div(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2div_new(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2mul(t_vertex2 *v1, t_vertex2 *v2);
t_vertex2	*ft_vertex2mul_new(t_vertex2 *v1, t_vertex2 *v2);

typedef struct	s_vertex3
{
	int			x;
	int			y;
	int			z;
}				t_vertex3;

t_vertex3	*ft_vertex3opp(t_vertex3 *v);
t_vertex3	*ft_vertex3opp_new(t_vertex3 *v1);
t_vertex3	*ft_vertex3add(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3add_new(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3sub(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3sub_new(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3div(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3div_new(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3mul(t_vertex3 *v1, t_vertex3 *v2);
t_vertex3	*ft_vertex3mul_new(t_vertex3 *v1, t_vertex3 *v2);

typedef struct	s_vertex4
{
	int			x;
	int			y;
	int			z;
	float		w;
}				t_vertex4;

t_vertex4	*ft_vertex3to4_new(t_vertex3 *v, float w);
t_vertex4	*ft_vertex3to4(t_vertex4 *dst, t_vertex3 *v, float w);

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

t_vector2	*ft_vector2opp(t_vector2 *v);
t_vector2	*ft_vector2opp_new(t_vector2 *v1);
t_vector2	*ft_vector2add(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2add_new(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2sub(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2sub_new(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2crossprod(t_vector2 *v1, t_vector2 *v2);
t_vector2	*ft_vector2crossprod_new(t_vector2 *v1, t_vector2 *v2);
float		ft_vector2scal(t_vector2 *v1, t_vector2 *v2);
float		ft_vector2magn(t_vector2 *v);

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3	*ft_vector3opp(t_vector3 *v);
t_vector3	*ft_vector3opp_new(t_vector3 *v1);
t_vector3	*ft_vector3add(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3add_new(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3sub(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3sub_new(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3crossprod(t_vector3 *v1, t_vector3 *v2);
t_vector3	*ft_vector3crossprod_new(t_vector3 *v1, t_vector3 *v2);
float		ft_vector3scal(t_vector3 *v1, t_vector3 *v2);
float		ft_vector3magn(t_vector3 *v);

typedef struct	s_vector4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vector4;

t_vector3	*ft_vector4to3_new(t_vector4 *v);
t_vector4	*ft_vector3to4_new(t_vector3 *v, float *w);

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
