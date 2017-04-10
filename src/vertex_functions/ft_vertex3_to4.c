/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3_to4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:29:39 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	t_vertex3 to t_vertex4
**		store the result in t_vertex4 dst
*/

t_vertex4	*ft_vertex3_to4(t_vertex4 *dst, t_vertex3 *v, float w)
{
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = w;
	return (dst);
}
