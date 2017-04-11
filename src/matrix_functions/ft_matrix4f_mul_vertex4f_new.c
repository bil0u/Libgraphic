/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix4f_mul_vertex4f_new.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 05:13:42 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

t_vertex4f	*ft_matrix4f_mul_vertex4f_new(t_matrix4f *m, t_vertex4f *v)
{
	t_vertex4f		*tmp;

	if (!(tmp = (t_vertex4f *)malloc(sizeof(t_vertex4f))))
		return (NULL);
	tmp->x = (m->m[0][0] * v->x) + (m->m[0][1] * v->y)
		+ (m->m[0][2] * v->z) + (m->m[0][3] * v->w);
	tmp->y = (m->m[1][0] * v->x) + (m->m[1][1] * v->y)
		+ (m->m[1][2] * v->z) + (m->m[1][3] * v->w);
	tmp->z = (m->m[2][0] * v->x) + (m->m[2][1] * v->y)
		+ (m->m[2][2] * v->z) + (m->m[2][3] * v->w);
	tmp->w = (m->m[2][0] * v->x) + (m->m[2][1] * v->y)
		+ (m->m[2][2] * v->z) + (m->m[2][3] * v->w);
	return (tmp);
}
