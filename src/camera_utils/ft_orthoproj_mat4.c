/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orthoproj_mat4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:03:27 by upopee            #+#    #+#             */
/*   Updated: 2017/04/21 22:00:40 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_matrix4	ft_orthoproj_mat4(t_camera *cam)
{
	t_matrix4	dst;
	float		scale;
	float		depth_remap;

	scale = 1 / tanf(TO_RADIAN(cam->view_angle * 0.5));
	depth_remap = -cam->far / (cam->far - cam->near);
	dst.array[0][0] = scale;
	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[0][3] = 0.0;
	dst.array[1][0] = 0.0;
	dst.array[1][1] = scale;
	dst.array[1][2] = 0.0;
	dst.array[1][3] = 0.0;
	dst.array[2][0] = 0.0;
	dst.array[2][1] = 0.0;
	dst.array[2][2] = depth_remap;
	dst.array[2][3] = depth_remap;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = -1.0;
	dst.array[3][3] = 0.0;
	return (dst);
}
