/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/05 21:28:45 by upopee           ###   ########.fr       */
/*   Updated: 2017/04/05 16:50:45 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H

#include <mlx.h>

# define M_PI 3.14159265358979323846f
# define M_PI_2 1.57079632679489661923f
# define M_PI_4 0.785398163397448309616f
# define M_1_PI 0.318309886183790671538f
# define M_2_PI 0.636619772367581343076f
# define M_2_SQRTPI 1.12837916709551257390f
# define TO_RADIAN(deg) (float)(((deg) * M_PI / 180.0f))
# define TO_DEGREE(rad) (float)(((rad) * 180.0f / M_PI))

/*
** +----------------+
** | MLX STRUCTURES |
** +----------------+
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
** +--------------------+
** | GENERAL STRUCTURES |
** +--------------------+
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

typedef struct	s_vertex2i
{
	int			x;
	int			y;
}				t_vertex2i;

typedef struct	s_vertex3i
{
	int			x;
	int			y;
	int			z;
}				t_vertex3i;

typedef struct	s_vertex4i
{
	int			x;
	int			y;
	int			z;
	float		w;
}				t_vertex4i;

typedef struct	s_vertex2f
{
	float		x;
	float		y;
}				t_vertex2f;

typedef struct	s_vertex3f
{
	float		x;
	float		y;
	float		z;
}				t_vertex3f;

typedef struct	s_vertex4f
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vertex4f;

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

void	ft_bresenham(t_mlxenv *e, t_vertex2D p1, t_vertex2D p2);

#endif
