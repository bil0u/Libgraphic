/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_to_ver3f_new.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 07:26:25 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	t_vertex3i to t_vertex3f
**		return in a new t_vertex3f (malloc used)
*/

t_vertex3f	*ft_ver3i_to_ver3f_new(t_vertex3i *v)
{
	t_vertex3f	*dst;

	if ((dst = (t_vertex3f *)malloc(sizeof(t_vertex3f))) == NULL)
		return (NULL);
	dst->x = (float)v->x;
	dst->y = (float)v->y;
	dst->z = (float)v->z;
	return (dst);
}
