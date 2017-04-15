/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_mul_quat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 20:12:39 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_mat4_mul_quat(t_matrix4 *m, t_quater *v)
{
	t_quater	dst;

	dst.x = (m->array[0][0] * v->x) + (m->array[0][1] * v->y)
			+ (m->array[0][2] * v->z) + (m->array[0][3] * v->w);
	dst.y = (m->array[1][0] * v->x) + (m->array[1][1] * v->y)
			+ (m->array[1][2] * v->z) + (m->array[1][3] * v->w);
	dst.z = (m->array[2][0] * v->x) + (m->array[2][1] * v->y)
			+ (m->array[2][2] * v->z) + (m->array[2][3] * v->w);
	dst.w = (m->array[3][0] * v->x) + (m->array[3][1] * v->y)
			+ (m->array[3][2] * v->z) + (m->array[3][3] * v->w);
	return (dst);
}
