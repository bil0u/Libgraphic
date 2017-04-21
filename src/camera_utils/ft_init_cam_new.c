/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cam_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:47:03 by upopee            #+#    #+#             */
/*   Updated: 2017/04/22 00:19:01 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdlib.h>
#include "libgraphic.h"

t_camera	*ft_init_cam_new(float fov, float ratio, float near, float far)
{
	t_camera	*cam;

	if (!(cam = (t_camera *)malloc(sizeof(t_camera))))
		return (NULL);
	cam->view_angle = fov;
	cam->aspect_ratio = ratio;
	cam->near = near;
	cam->far = far;
	cam->top_limit = tanf(TO_RADIAN(fov) * 0.5) * near;
	cam->bottom_limit = -cam->top_limit;
	cam->right_limit = cam->top_limit * ratio;
	cam->left_limit = -cam->right_limit;
	return (cam);
}
