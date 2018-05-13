/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:19:58 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../includes/quaternions.h"

t_quater	ft_quat_normalize(t_quater q)
{
	t_quater	dst;
	float		norm;
	float		norm_inv;

	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	dst.w = q.w;
	norm = sqrtf(q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		dst.x *= norm_inv;
		dst.y *= norm_inv;
		dst.z *= norm_inv;
		dst.w *= norm_inv;
	}
	return (dst);
}
