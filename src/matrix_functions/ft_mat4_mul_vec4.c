/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_mul_vec4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:47:32 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector4	ft_mat4_mul_vec4(t_matrix4 *m, t_vector4 *v)
{
	t_vector4	dst;

	dst.x = (m->array[0][0] * v->x) + (m->array[0][1] * v->y)
			+ (m->array[0][2] * v->z) + (m->array[0][3] * v->w);
	dst.y = (m->array[1][0] * v->x) + (m->array[1][1] * v->y)
			+ (m->array[1][2] * v->z) + (m->array[1][3] * v->w);
	dst.z = (m->array[2][0] * v->x) + (m->array[2][1] * v->y)
			+ (m->array[2][2] * v->z) + (m->array[2][3] * v->w);
	dst.w = (m->array[2][0] * v->x) + (m->array[2][1] * v->y)
			+ (m->array[2][2] * v->z) + (m->array[2][3] * v->w);
	return (dst);
}
