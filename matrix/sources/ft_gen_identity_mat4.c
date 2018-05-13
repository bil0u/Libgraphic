/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_identity_mat4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:42:15 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:14:07 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/matrix.h"

t_matrix4	ft_gen_identity_mat4(void)
{
	t_matrix4	dst;

	dst.array[0][0] = 1.0;
	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[0][3] = 0.0;
	dst.array[1][0] = 0.0;
	dst.array[1][1] = 1.0;
	dst.array[1][2] = 0.0;
	dst.array[1][3] = 0.0;
	dst.array[2][0] = 0.0;
	dst.array[2][1] = 0.0;
	dst.array[2][2] = 1.0;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
