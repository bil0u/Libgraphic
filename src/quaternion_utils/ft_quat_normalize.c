/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 18:24:17 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

void	ft_quat_normalize(t_quater *q)
{
	float		norm;
	float		norm_inv;

	norm = sqrtf(q->x * q->x + q->y * q->y + q->z * q->z + q->w * q->w);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		q->x *= norm_inv;
		q->y *= norm_inv;
		q->z *= norm_inv;
		q->w *= norm_inv;
	}
}
