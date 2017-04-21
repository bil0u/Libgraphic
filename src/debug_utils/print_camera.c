/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_camera.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 05:40:10 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 21:16:51 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libgraphic.h"

void	print_cam(t_camera *cam)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("> Eye :\n\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam->eye.x, cam->eye.y, cam->eye.z);
	printf("> Center :\n\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam->center.x, cam->center.y, cam->center.z);
	printf("> Up :\n\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam->up.x, cam->up.y, cam->up.z);
	printf("> Forward :\n\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam->forward.x, cam->forward.y, cam->forward.z);
	printf("> Side :\n>\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam->side.x, cam->side.y, cam->side.z);
	printf("> View angle :\n\t%2$ .*1$f\n",
			precision, cam->view_angle);
	printf("> Aspect ratio :\n\t%2$ .*1$f\n",
			precision, cam->aspect_ratio);
	printf("> Near :\n\t%2$ .*1$f\n",
			6, cam->near);
	printf("> Far :\n\t%2$ .*1$f\n",
			6, cam->far);
}
