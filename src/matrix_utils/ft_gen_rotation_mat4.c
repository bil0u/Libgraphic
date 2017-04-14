/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_rotation_mat4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:14:56 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:47:09 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_matrix4	ft_gen_rotation_mat4(float deg_angle, float x, float y, float z)
{
	t_matrix4	dst;
	float		s;
	float		c;
	float		t;

	s = sinf(TO_RADIAN(deg_angle));
	c = cosf(TO_RADIAN(deg_angle));
	t = 1.0 - c;
	dst.array[0][0] = (x * x * t) + c;
	dst.array[0][1] = (x * y * t) - (z * s);
	dst.array[0][2] = (x * z * t) + (y * s);
	dst.array[0][3] = 0.0;
	dst.array[1][0] = (y * x * t) + (z * s);
	dst.array[1][1] = (y * y * t) + c;
	dst.array[1][2] = (y * z * t) - (x * s);
	dst.array[1][3] = 0.0;
	dst.array[2][0] = (z * x * t) - (y * s);
	dst.array[2][1] = (z * y * t) + (x * s);
	dst.array[2][2] = (z * z * t) + c;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
