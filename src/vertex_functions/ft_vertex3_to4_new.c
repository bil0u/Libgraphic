/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3_to4_new.c                               :+:      :+:    :+:   */
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
**	->	t_vertex3 to t_vertex4
**		return in a new t_vertex4 (malloc used)
*/

t_vertex4	*ft_vertex3_to4_new(t_vertex3 *v, float w)
{
	t_vertex4	*dst;

	if ((dst = (t_vertex4 *)malloc(sizeof(t_vertex4))) == NULL)
		return (NULL);
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = w;
	return (dst);
}
