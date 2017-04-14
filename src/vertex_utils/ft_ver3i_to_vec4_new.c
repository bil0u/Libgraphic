/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_to_vec4_new.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 07:39:16 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	t_vertex3i to t_vector4
**		return in a new t_vector4 (malloc used)
*/

t_vector4	*ft_ver3i_to_vec4_new(t_vertex3i *v, float w)
{
	t_vector4	*dst;

	if ((dst = (t_vector4 *)malloc(sizeof(t_vector4))) == NULL)
		return (NULL);
	dst->x = (float)v->x;
	dst->y = (float)v->y;
	dst->z = (float)v->z;
	dst->w = w;
	return (dst);
}
