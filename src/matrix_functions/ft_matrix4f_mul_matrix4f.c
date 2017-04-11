/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix4f_mul_matrix4f.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 06:15:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_matrix4f	*ft_matrix4f_mul_matrix4f(t_matrix4f *m1, t_matrix4f *m2)
{
	t_matrix4f		tmp;
	int				i;
	int				j;
	int				k;

	i = 4;
	while (i--)
	{
		j = 4;
		while (j--)
		{
			tmp.m[i][j] = 0.0;
			k = 4;
			while (k--)
				tmp.m[i][j] += (m1->m[i][k] * m2->m[k][j]);
		}
	}
	*m2 = tmp;
	return (m2);
}
