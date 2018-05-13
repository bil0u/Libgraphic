/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:23:06 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../includes/vector.h"

t_vector3	ft_vec3_normalize(t_vector3 v)
{
	t_vector3	dst;
	float		norm;
	float		norm_inv;

	dst.x = v.x;
	dst.y = v.y;
	dst.z = v.z;
	norm = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		dst.x *= norm_inv;
		dst.y *= norm_inv;
		dst.z *= norm_inv;
	}
	return (dst);
}
