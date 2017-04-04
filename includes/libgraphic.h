/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:58:41 by upopee            #+#    #+#             */
/*   Updated: 2017/04/04 15:54:16 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H

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

#endif
