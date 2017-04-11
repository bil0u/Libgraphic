/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3f_opp_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/11 01:29:05 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vertex3f value : v = -v
**		return the result in a new t_vector3 (malloc used)
*/

t_vertex3f	*ft_vertex3f_opp_new(t_vertex3f *v)
{
	t_vertex3f	*dst;

	if ((dst = (t_vertex3f *)malloc(sizeof(t_vertex3f))) == NULL)
		return (NULL);
	dst->x = -(v->x);
	dst->y = -(v->y);
	dst->z = -(v->z);
	return (dst);
}
