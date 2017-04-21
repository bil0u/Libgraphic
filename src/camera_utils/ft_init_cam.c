/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:47:03 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 21:24:16 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_camera	ft_init_cam(float view_angle, float aspect_ratio,
						float near, float far)
{
	t_camera	cam;

	cam.view_angle = view_angle;
	cam.aspect_ratio = aspect_ratio;
	cam.near = near;
	cam.far = far;
	return (cam);
}
