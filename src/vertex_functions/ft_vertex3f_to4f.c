/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3f_to4f.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:30:56 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	t_vertex3f to t_vertex4f
**		store the result in t_vertex4f dst
*/

t_vertex4f	*ft_vertex3f_to4f(t_vertex4f *dst, t_vertex3f *v, float w)
{
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = w;
	return (dst);
}
