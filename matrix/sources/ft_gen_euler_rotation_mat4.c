/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_euler_rotation_mat4.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:14:56 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:40:29 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../libgraphic_macros.h"
#include "../includes/matrix.h"

static t_matrix4	ft_gen_rot_x(float rad_angle_x)
{
	t_matrix4	rot_x;
	float		s;
	float		c;

	s = sinf(rad_angle_x);
	c = cosf(rad_angle_x);
	rot_x.array[0][0] = 1.0;
	rot_x.array[0][1] = 0.0;
	rot_x.array[0][2] = 0.0;
	rot_x.array[0][3] = 0.0;
	rot_x.array[1][0] = 0.0;
	rot_x.array[1][1] = c;
	rot_x.array[1][2] = -s;
	rot_x.array[1][3] = 0.0;
	rot_x.array[2][0] = 0.0;
	rot_x.array[2][1] = s;
	rot_x.array[2][2] = c;
	rot_x.array[2][3] = 0.0;
	rot_x.array[3][0] = 0.0;
	rot_x.array[3][1] = 0.0;
	rot_x.array[3][2] = 0.0;
	rot_x.array[3][3] = 1.0;
	return (rot_x);
}

static t_matrix4	ft_gen_rot_y(float rad_angle_y)
{
	t_matrix4	rot_y;
	float		s;
	float		c;

	s = sinf(rad_angle_y);
	c = cosf(rad_angle_y);
	rot_y.array[0][0] = c;
	rot_y.array[0][1] = 0.0;
	rot_y.array[0][2] = s;
	rot_y.array[0][3] = 0.0;
	rot_y.array[1][0] = 0.0;
	rot_y.array[1][1] = 1.0;
	rot_y.array[1][2] = 0.0;
	rot_y.array[1][3] = 0.0;
	rot_y.array[2][0] = -s;
	rot_y.array[2][1] = 0.0;
	rot_y.array[2][2] = c;
	rot_y.array[2][3] = 0.0;
	rot_y.array[3][0] = 0.0;
	rot_y.array[3][1] = 0.0;
	rot_y.array[3][2] = 0.0;
	rot_y.array[3][3] = 1.0;
	return (rot_y);
}

static t_matrix4	ft_gen_rot_z(float rad_angle_z)
{
	t_matrix4	rot_z;
	float		s;
	float		c;

	s = sinf(rad_angle_z);
	c = cosf(rad_angle_z);
	rot_z.array[0][0] = c;
	rot_z.array[0][1] = -s;
	rot_z.array[0][2] = 0.0;
	rot_z.array[0][3] = 0.0;
	rot_z.array[1][0] = s;
	rot_z.array[1][1] = c;
	rot_z.array[1][2] = 0.0;
	rot_z.array[1][3] = 0.0;
	rot_z.array[2][0] = 0.0;
	rot_z.array[2][1] = 0.0;
	rot_z.array[2][2] = 1.0;
	rot_z.array[2][3] = 0.0;
	rot_z.array[3][0] = 0.0;
	rot_z.array[3][1] = 0.0;
	rot_z.array[3][2] = 0.0;
	rot_z.array[3][3] = 1.0;
	return (rot_z);
}

t_matrix4			ft_gen_euler_rotation_mat4(float deg_x, float deg_y,
																float deg_z)
{
	t_matrix4	rot_x;
	t_matrix4	rot_y;
	t_matrix4	rot_z;
	t_matrix4	dst;

	rot_x = ft_gen_rot_x(TO_RADIAN(deg_x));
	rot_y = ft_gen_rot_y(TO_RADIAN(deg_y));
	rot_z = ft_gen_rot_z(TO_RADIAN(deg_z));
	dst = ft_mat4_mul_mat4(rot_z, rot_y);
	dst = ft_mat4_mul_mat4(rot_x, dst);
	return (dst);
}
