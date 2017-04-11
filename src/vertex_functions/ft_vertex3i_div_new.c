/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertex3i_div_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 06:12:09 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Divide two t_vertex3i : v1 / v2
**		result is stored in a new t_vertex3i (malloc used)
*/

t_vertex3i	*ft_vertex3i_div_new(t_vertex3i *v1, t_vertex3i *v2)
{
	t_vertex3i	*dst;

	if ((dst = (t_vertex3i *)malloc(sizeof(t_vertex3i))) == NULL)
		return (NULL);
	dst->x = v1->x / v2->x;
	dst->y = v1->y / v2->y;
	dst->z = v1->z / v2->z;
	return (dst);
}
