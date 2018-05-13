/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lookat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:53:00 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:04:38 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/includes/matrix.h"
#include "../../vector/includes/vector.h"
#include "../includes/camera.h"

t_matrix4	ft_lookat(t_camera *cam, t_vector3 eye,
						t_vector3 center, t_vector3 up)
{
	t_vector3	forward;
	t_vector3	side;
	t_matrix4	view;

	up = ft_vec3_normalize(up);
	forward = ft_vec3_sub(eye, center);
	forward = ft_vec3_normalize(forward);
	side = ft_vec3_crossprod(up, forward);
	up = ft_vec3_crossprod(forward, side);
	cam->up = up;
	cam->side = side;
	cam->forward = forward;
	cam->eye = eye;
	cam->center = center;
	view = ft_view_mat4(eye, up, side, forward);
	cam->view_matrix = view;
	return (view);
}
