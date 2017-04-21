/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_world_to_eye_mat4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 20:00:39 by upopee            #+#    #+#             */
/*   Updated: 2017/04/21 04:44:14 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4	ft_world_to_eye_mat4(t_vector3 *side, t_vector3 *up,
										t_vector3 *forward, t_vector3 *eye)
{
	t_matrix4	mat;

	mat.array[0][0] = side->x;
	mat.array[0][1] = side->y;
	mat.array[0][2] = side->z;
	mat.array[0][3] = 0.0;
	mat.array[1][0] = up->x;
	mat.array[1][1] = up->y;
	mat.array[1][2] = up->z;
	mat.array[1][3] = 0.0;
	mat.array[2][0] = forward->x;
	mat.array[2][1] = forward->y;
	mat.array[2][2] = forward->z;
	mat.array[2][3] = 0.0;
	mat.array[3][0] = eye->x;
	mat.array[3][1] = eye->y;
	mat.array[3][2] = eye->z;
	mat.array[3][3] = 1.0;
	return (mat);
}
