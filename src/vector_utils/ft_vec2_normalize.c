/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 00:16:24 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

void	ft_vec2_normalize(t_vector2 *v)
{
	float	norm;
	float	norm_inv;

	norm = sqrtf(v->x * v->x + v->y * v->y);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		v->x *= norm_inv;
		v->y *= norm_inv;
	}
}
