/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:47:03 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 10:31:57 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_camera	ft_init_cam(float fov, float ratio, float near, float far)
{
	t_camera	cam;

	cam.view_angle = fov;
	cam.aspect_ratio = ratio;
	cam.near = near;
	cam.far = far;
	return (cam);
}
