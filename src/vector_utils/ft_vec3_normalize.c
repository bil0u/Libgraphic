/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 18:23:28 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

void	ft_vec3_normalize(t_vector3 *v)
{
	float	norm;
	float	norm_inv;

	norm = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		v->x *= norm_inv;
		v->y *= norm_inv;
		v->z *= norm_inv;
	}
}
