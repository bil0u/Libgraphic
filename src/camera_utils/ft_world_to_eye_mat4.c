/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_world_to_eye_mat4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 20:00:39 by upopee            #+#    #+#             */
/*   Updated: 2017/04/21 21:56:31 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4	ft_world_to_eye_mat4(t_camera *cam)
{
	t_matrix4	dst;

	dst.array[0][0] = cam->side.x;
	dst.array[0][1] = cam->side.y;
	dst.array[0][2] = cam->side.z;
	dst.array[0][3] = 0.0;
	dst.array[1][0] = cam->up.x;
	dst.array[1][1] = cam->up.y;
	dst.array[1][2] = cam->up.z;
	dst.array[1][3] = 0.0;
	dst.array[2][0] = cam->forward.x;
	dst.array[2][1] = cam->forward.y;
	dst.array[2][2] = cam->forward.z;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = cam->eye.x;
	dst.array[3][1] = cam->eye.y;
	dst.array[3][2] = cam->eye.z;
	dst.array[3][3] = 1.0;
	return (dst);
}
