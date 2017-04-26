/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spheric_rot_to_quat.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:23:55 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 09:45:05 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_quater	ft_spheric_rot_to_quat(float lat, float lon, float rad_angle)
{
	t_quater	dst;
	float		sin_a;
	float		sin_lat;

	rad_angle *= 0.5;
	sin_a = sinf(rad_angle);
	sin_lat = sinf(lat);
	dst.x = sin_a * cosf(lat) * sinf(lon);
	dst.y = sin_a * sin_lat;
	dst.z = sin_a * sin_lat * cosf(lon);
	dst.w = cosf(rad_angle);
	return (dst);
}
