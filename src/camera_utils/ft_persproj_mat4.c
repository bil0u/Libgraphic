/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_persproj_mat4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:03:27 by upopee            #+#    #+#             */
/*   Updated: 2017/04/22 00:21:14 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_matrix4	ft_persproj_mat4(t_camera *cam)
{
	t_matrix4	dst;
	float		r_l;
	float		t_b;
	float		f_n;

	r_l = 1.0 / (cam->right_limit - cam->left_limit);
	t_b = 1.0 / (cam->top_limit - cam->bottom_limit);
	f_n = 1.0 / (cam->far - cam->near);
	dst.array[0][0] = (cam->near + cam->near) * r_l;
	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[0][3] = 0.0;
	dst.array[1][0] = 0.0;
	dst.array[1][1] = (cam->near + cam->near) * t_b;
	dst.array[1][2] = 0.0;
	dst.array[1][3] = 0.0;
	dst.array[2][0] = (cam->right_limit + cam->left_limit) * r_l;
	dst.array[2][1] = (cam->top_limit + cam->bottom_limit) * t_b;
	dst.array[2][2] = (cam->far + cam->near) * f_n;
	dst.array[2][3] = -1.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = -2.0 * cam->far * cam->near * f_n;
	dst.array[3][3] = 0.0;
	return (dst);
}
