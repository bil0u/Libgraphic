/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spheric_rot_to_quat.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:23:55 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 18:30:38 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_quater	ft_spheric_rot_to_quat(float lat, float lon, float angle)
{
	t_quater	dst;
	float		rad;
	float		sin_a;
	float		sin_lat;

	rad = TO_RADIAN(angle);
	sin_a = sinf(rad / 2.0);
	sin_lat = sinf(lat);
	dst.x = sin_a * cosf(lat) * sinf(lon);
	dst.y = sin_a * sin_lat;
	dst.z = sin_a * sin_lat * cosf(lon);
	dst.w = cosf(rad / 2.0);
	return (dst);
}
