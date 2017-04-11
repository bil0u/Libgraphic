/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3i_to4_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:12:41 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	t_vertex3i to t_vertex4i
**		return in a new t_vertex4i (malloc used)
*/

t_vertex4i	*ft_vertex3i_to4i_new(t_vertex3i *v, float w)
{
	t_vertex4i	*dst;

	if ((dst = (t_vertex4i *)malloc(sizeof(t_vertex4i))) == NULL)
		return (NULL);
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = w;
	return (dst);
}
