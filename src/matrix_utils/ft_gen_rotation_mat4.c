/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_rotation_mat4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:14:56 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:06:19 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

static t_matrix4	ft_gen_matrix(float rad_angle, t_vector3 v)
{
	t_matrix4	dst;
	float		s;
	float		c;
	float		t;

	s = sinf(rad_angle);
	c = cosf(rad_angle);
	t = 1.0 - c;
	dst.array[0][0] = (v.x * v.x * t) + c;
	dst.array[0][1] = (v.x * v.y * t) - (v.z * s);
	dst.array[0][2] = (v.x * v.z * t) + (v.y * s);
	dst.array[0][3] = 0.0;
	dst.array[1][0] = (v.y * v.x * t) + (v.z * s);
	dst.array[1][1] = (v.y * v.y * t) + c;
	dst.array[1][2] = (v.y * v.z * t) - (v.x * s);
	dst.array[1][3] = 0.0;
	dst.array[2][0] = (v.z * v.x * t) - (v.y * s);
	dst.array[2][1] = (v.z * v.y * t) + (v.x * s);
	dst.array[2][2] = (v.z * v.z * t) + c;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}

t_matrix4			ft_gen_rotation_mat4(float deg_angle, t_vector3 v)
{
	ft_vec3_normalize(v);
	return (ft_gen_matrix(TO_RADIAN(deg_angle), v));
}
