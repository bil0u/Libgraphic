/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_maths.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 19:28:49 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:43:56 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef G_MATHS_H
# define G_MATHS_H

#include "../../vertex/includes/vertex.h"
#include "../../vector/includes/vector.h"
#include "../../quaternions/includes/quaternions.h"
#include "../../matrix/includes/matrix.h"

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

t_vector3		ft_spheric_to_vec3(float theta, float phi);
t_quater		ft_spheric_to_quat(float theta, float phi);
t_vertex2i		ft_viewport_tlc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height);
t_vertex2i		ft_viewport_llc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height);
float			ft_to_frange(t_frange in, t_frange out, float x);
t_vertex2i		ft_ver3f_proj(t_vertex3f v, t_matrix4 mvp,
							int width, int height);

#endif
