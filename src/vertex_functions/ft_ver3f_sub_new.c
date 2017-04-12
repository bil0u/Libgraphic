/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3f_sub_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 07:12:20 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Substract two t_vertex3f : v1 - v2
**		result is stored in a new t_vertex3f (malloc used)
*/

t_vertex3f	*ft_ver3f_sub_new(t_vertex3f *v1, t_vertex3f *v2)
{
	t_vertex3f	*dst;

	if ((dst = (t_vertex3f *)malloc(sizeof(t_vertex3f))) == NULL)
		return (NULL);
	dst->x = v1->x - v2->x;
	dst->y = v1->y - v2->y;
	dst->z = v1->z - v2->z;
	return (dst);
}
