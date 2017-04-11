/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3i_opp_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:11:09 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Opposite t_vertex3i value : v = -v
**		return the result in a new t_vector3 (malloc used)
*/

t_vertex3i	*ft_vertex3i_opp_new(t_vertex3i *v)
{
	t_vertex3i	*dst;

	if ((dst = (t_vertex3i *)malloc(sizeof(t_vertex3i))) == NULL)
		return (NULL);
	dst->x = -(v->x);
	dst->y = -(v->y);
	dst->z = -(v->z);
	return (dst);
}
