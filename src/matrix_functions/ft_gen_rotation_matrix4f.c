/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_rotation_matrix4f.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:14:56 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 22:20:44 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.c"

t_matrix4f	ft_gen_rotation_matrix4f(float angle, float x, float y, float z)
{
	t_matrix4f	m;
	float		s;
	float		c;

	angle = TO_RADIAN(angle);
	s = sinf(angle);
	c = cosf(angle);
	m.m[0][0] = ((x * x) * (1.0 - c)) + c;
	m.m[0][1] = ((x * y) * (1.0 - c)) - (z * s);
	m.m[0][2] = ((x * z) * (1.0 - c)) + (y * s);
	m.m[0][3] = 0.0;
	m.m[1][0] = ((y * x) * (1.0 - c)) + (z * s);
	m.m[1][1] = ((y * y) * (1.0 - c)) + c;
	m.m[1][2] = ((y * z) * (1.0 - c)) - (x * s);
	m.m[1][3] = 0.0;
	m.m[2][0] = ((z * x) * (1.0 - c)) - (y * s);
	m.m[2][1] = ((z * y) * (1.0 - c)) + (x * s);
	m.m[2][2] = ((z * z) * (1.0 - c)) + c;
	m.m[2][3] = 0.0;
	m.m[3][0] = 0.0;
	m.m[3][1] = 0.0;
	m.m[3][2] = 0.0;
	m.m[3][3] = 1.0;
	return (m);
}
