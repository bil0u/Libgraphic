/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_mul_mat4_new.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:46:04 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

t_matrix4	*ft_mat4_mul_mat4_new(t_matrix4 *m1, t_matrix4 *m2)
{
	t_matrix4		*dst;
	int				i;
	int				j;
	int				k;

	if (!(dst = (t_matrix4 *)malloc(sizeof(t_matrix4))))
		return (NULL);
	i = 4;
	while (i--)
	{
		j = 4;
		while (j--)
		{
			dst->array[i][j] = 0.0;
			k = 4;
			while (k--)
				dst->array[i][j] += (m1->array[i][k] * m2->array[k][j]);
		}
	}
	return (dst);
}
