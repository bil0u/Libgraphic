/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lookat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:53:00 by upopee            #+#    #+#             */
/*   Updated: 2017/04/21 04:44:11 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4	ft_lookat(t_camera *cam, t_vector3 *eye,
						t_vector3 *center, t_vector3 *up)
{
	cam->forward = ft_vec3_sub(eye, center);
	ft_vec3_normalize(&cam->forward);
	cam->up = *up;
	ft_vec3_normalize(&cam->up);
	cam->side = ft_vec3_crossprod(&cam->up, &cam->forward);
	cam->up = ft_vec3_crossprod(&cam->forward, &cam->side);
	cam->eye = *eye;
	cam->center = *center;
	cam->view_matrix = ft_world_to_eye_mat4(&cam->side, &cam->up,
											&cam->forward, &cam->eye);
	return (cam->view_matrix);
}
