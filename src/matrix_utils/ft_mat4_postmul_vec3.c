/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_postmul_vec3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 00:19:41 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	ft_mat4_postmul_vec3(t_vector3 v, t_matrix4 m)
{
	t_vector3	dst;

	dst.x = v.x * m.array[0][0] + v.y * m.array[0][1]
			+ v.z * m.array[0][2] + m.array[0][3];
	dst.y = v.x * m.array[1][0] + v.y * m.array[1][1]
			+ v.z * m.array[1][2] + m.array[1][3];
	dst.z = v.x * m.array[2][0] + v.y * m.array[2][1]
			+ v.z * m.array[2][2] + m.array[2][3];
	return (dst);
}
