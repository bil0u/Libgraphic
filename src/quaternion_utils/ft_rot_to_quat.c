/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_to_quat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:23:55 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 00:39:26 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_quater	ft_rot_to_quat(float a_x, float a_y, float a_z, float rad_angle)
{
	t_quater	dst;
	float		s;

	rad_angle *= 0.5;
	s = sinf(rad_angle);
	dst.x = a_x * s;
	dst.y = a_y * s;
	dst.z = a_z * s;
	dst.w = cosf(rad_angle);
	dst = ft_quat_normalize(dst);
	return (dst);
}
