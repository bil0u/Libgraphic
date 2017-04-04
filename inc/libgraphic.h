/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/04 20:42:50 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H

/*
** +----------------+
** | MLX STRUCTURES |
** +----------------+
*/

typedef struct	s_mlxwin
{
	void		*id;
	int			size_x;
	int			size_y;
}				t_mlxwin;

typedef struct	s_mlximg
{
	void		*id;
	int			size_x;
	int			size_y;
	int			bpp;
	int			size_line;
	int			endian;
}				t_mlximg;

typedef struct	s_mlxenv
{
	void		*init_id;
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

typedef struct	s_vertex2D
{
	int			x;
	int			y;
	float		w;
}				t_vertex2D;

typedef struct	s_vertex3D
{
	int			x;
	int			y;
	int			z;
	float		w;
}				t_vertex3D;

/*
** +-------------------+
** | DRAWING FUNCTIONS |
** +-------------------+
*/

void	ft_bresenham(t_mlxenv *e, t_vertex2D p1, t_vertex2D p2);

#endif
