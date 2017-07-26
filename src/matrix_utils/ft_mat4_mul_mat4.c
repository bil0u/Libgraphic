/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_mul_mat4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:06:00 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4	ft_mat4_mul_mat4(t_matrix4 m1, t_matrix4 m2)
{
	t_matrix4	dst;
	int			i;
	int			j;

	i = 4;
	while (i--)
	{
		j = 4;
		while (j--)
		{
			dst.array[i][j] = m1.array[i][0] * m2.array[0][j]
							+ m1.array[i][1] * m2.array[1][j]
							+ m1.array[i][2] * m2.array[2][j]
							+ m1.array[i][3] * m2.array[3][j];
		}
	}
	return (dst);
}
