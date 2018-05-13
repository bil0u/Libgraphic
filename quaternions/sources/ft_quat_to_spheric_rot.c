/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_to_spheric_rot.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:23:55 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:20:33 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../includes/quaternions.h"

void		ft_quat_to_spheric_rot(t_quater q, float *lon,
									float *lat, float *angle)
{
	float	a_x;
	float	a_y;
	float	a_z;
	float	norm;

	*angle = acosf(q.w) * 2.0;
	a_x = q.x;
	a_y = q.y;
	a_z = q.z;
	norm = sqrtf(a_x * a_x + a_y * a_y + a_z * a_z);
	if (norm > 0.0005)
	{
		a_x /= norm;
		a_y /= norm;
		a_z /= norm;
	}
	*lat = -(asinf(a_y));
	if (a_x * a_x + a_z * a_z < 0.0005)
		*lon = 0.0;
	else
		*lon = atan2f(a_x, a_z);
	if (*lon < 0.0)
		*lon += 2 * M_PI;
}
