/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_premul_quat.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 01:00:43 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_mat4_premul_quat(t_matrix4 m, t_quater q)
{
	t_quater	dst;

	dst.x = m.array[0][0] * q.x + m.array[1][0] * q.y
			+ m.array[2][0] * q.z + m.array[3][0] * q.w;
	dst.y = m.array[0][1] * q.x + m.array[1][1] * q.y
			+ m.array[2][1] * q.z + m.array[3][1] * q.w;
	dst.z = m.array[0][2] * q.x + m.array[1][2] * q.y
			+ m.array[2][2] * q.z + m.array[3][2] * q.w;
	dst.w = m.array[0][3] * q.x + m.array[1][3] * q.y
			+ m.array[2][3] * q.z + m.array[3][3] * q.w;
	return (dst);
}
