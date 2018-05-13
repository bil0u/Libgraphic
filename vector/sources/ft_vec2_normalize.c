/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:22:39 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../includes/vector.h"

t_vector2	ft_vec2_normalize(t_vector2 v)
{
	t_vector2	dst;
	float		norm;
	float		norm_inv;

	dst.x = v.x;
	dst.y = v.y;
	norm = sqrtf(v.x * v.x + v.y * v.y);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		dst.x *= norm_inv;
		dst.y *= norm_inv;
	}
	return (dst);
}
