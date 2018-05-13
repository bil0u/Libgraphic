/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_scale_mat4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:57:14 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:14:27 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../vector/includes/vector.h"
#include "../includes/matrix.h"

t_matrix4	ft_gen_scale_mat4(t_vector3 v)
{
	t_matrix4	dst;

	dst.array[0][0] = v.x;
	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[0][3] = 0.0;
	dst.array[1][0] = 0.0;
	dst.array[1][1] = v.y;
	dst.array[1][2] = 0.0;
	dst.array[1][3] = 0.0;
	dst.array[2][0] = 0.0;
	dst.array[2][1] = 0.0;
	dst.array[2][2] = v.z;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
