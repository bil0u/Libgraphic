/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_scale_mat4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:57:14 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:46:11 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4	ft_gen_scale_mat4(float x, float y, float z)
{
	t_matrix4	dst;

	dst.array[0][0] = x;
	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[0][3] = 0.0;
	dst.array[1][0] = 0.0;
	dst.array[1][1] = y;
	dst.array[1][2] = 0.0;
	dst.array[1][3] = 0.0;
	dst.array[2][0] = 0.0;
	dst.array[2][1] = 0.0;
	dst.array[2][2] = z;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
