/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_to_quat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:23:55 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 19:09:07 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_quater	ft_rot_to_quat(float a_x, float a_y, float a_z, float angle)
{
	t_quater	dst;
	float		rad;
	float		s;

	rad = TO_RADIAN(angle);
	s = sinf(rad / 2.0);
	dst.x = a_x * s;
	dst.y = a_y * s;
	dst.z = a_z * s;
	dst.w = cosf(rad / 2.0);
	return (ft_quat_normalize(&dst));
}
