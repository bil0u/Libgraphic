/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_to_quat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 05:44:43 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:18:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../matrix/includes/matrix.h"
#include "../includes/quaternions.h"

t_quater	ft_mat4_to_quat(t_matrix4 m)
{
	t_quater	q;

	q.w = sqrtf(fmaxf(0,
				(1 + m.array[0][0] + m.array[1][1] + m.array[2][2]))) / 2;
	q.x = sqrtf(fmaxf(0,
				(1 + m.array[0][0] - m.array[1][1] - m.array[2][2]))) / 2;
	q.y = sqrtf(fmaxf(0,
				(1 - m.array[0][0] + m.array[1][1] - m.array[2][2]))) / 2;
	q.z = sqrtf(fmaxf(0,
				(1 - m.array[0][0] - m.array[1][1] + m.array[2][2]))) / 2;
	q.x = copysignf(q.x, q.x * (m.array[2][1] - m.array[1][2]));
	q.y = copysignf(q.y, q.y * (m.array[0][2] - m.array[2][0]));
	q.z = copysignf(q.z, q.z * (m.array[1][0] - m.array[0][1]));
	return (q);
}
