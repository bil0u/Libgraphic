/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_camera_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:47:03 by upopee            #+#    #+#             */
/*   Updated: 2017/04/18 22:29:05 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

t_camera	*ft_init_camera_new(float view_angle, float near, float far)
{
	t_camera	*cam;

	if (!(cam = (t_camera *)malloc(sizeof(t_camera))))
		return (NULL);
	cam->view_angle = view_angle;
	cam->near = near;
	cam->far = far;
	return (cam);
}
