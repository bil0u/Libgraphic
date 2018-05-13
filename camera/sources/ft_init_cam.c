/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:47:03 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:03:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../includes/camera.h"

t_camera	ft_init_cam(float fov, float ratio, float near, float far)
{
	t_camera	cam;

	cam.view_angle = fov;
	cam.aspect_ratio = ratio;
	cam.near = near;
	cam.far = far;
	return (cam);
}
