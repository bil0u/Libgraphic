/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lookat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:53:00 by upopee            #+#    #+#             */
/*   Updated: 2017/04/19 07:11:09 by upopee           ###   ########.fr       */
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
	mat.array[0][2] = OPP(cam->forward.x);
	mat.array[1][2] = OPP(cam->forward.y);
	mat.array[2][2] = OPP(cam->forward.z);
	mat.array[3][2] = 0.0;
	mat.array[0][3] = 0.0;
	mat.array[1][3] = 0.0;
	mat.array[2][3] = 0.0;
	mat.array[3][3] = 1.0;
	return (mat);
}

t_camera	*ft_init_camera_new(t_camera *cam, t_vector3 *eye,
								t_vector3 *center, t_vector3 *up)
{
	cam->eye = *eye;
	cam->center = *center;
	cam->up = *up;
	ft_vec3_normalize(&cam->up);
	cam->forward = ft_vec3_sub(center, eye);
	ft_vec3_normalize(&cam->forward);
	cam->side = ft_vec3_crossprod(&cam->up, &cam->forward);
	ft_vec3_normalize(&cam->side);
	cam->up = ft_vec3_crossprod(&cam->side, &cam->forward);
	return (ft_get_viewmatrix(cam));
}
