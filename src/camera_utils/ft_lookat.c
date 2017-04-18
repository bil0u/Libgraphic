/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lookat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:53:00 by upopee            #+#    #+#             */
/*   Updated: 2017/04/18 23:55:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

static t_matrix4	ft_get_viewmatrix(t_camera *cam)
{
	t_matrix4	mat;

	mat.array[0][0] = cam->side.x;
	mat.array[1][0] = cam->side.y;
	mat.array[2][0] = cam->side.z;
	mat.array[3][0] = 0.0;
	mat.array[0][1] = cam->up.x;
	mat.array[1][1] = cam->up.y;
	mat.array[2][1] = cam->up.z;
	mat.array[3][1] = 0.0;
	mat.array[0][2] = -(cam->forward.x);
	mat.array[1][2] = -(cam->forward.y);
	mat.array[2][2] = -(cam->forward.z);
	mat.array[3][2] = 0.0;
	mat.array[0][3] = 0.0;
	mat.array[1][3] = 0.0;
	mat.array[2][3] = 0.0;
	mat.array[3][3] = 1.0;
	return (mat);
}

t_matrix4			ft_lookat(t_camera *cam, t_quater *eye,
								t_quater *center, t_quater *up)
{
	cam->eye = *eye;
	cam->center = *center;
	cam->up = *up;
	ft_quat_normalize(&cam->up);
	cam->forward.x = center->x - eye->x;
	cam->forward.y = center->y - eye->y;
	cam->forward.z = center->z - eye->z;
	ft_quat_normalize(&cam->forward);
	cam->side = ft_quat_crossprod(&cam->up, &cam->forward);
	ft_quat_normalize(&cam->side);
	return (ft_get_viewmatrix(cam));
}
