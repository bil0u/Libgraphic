/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_sub_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/19 00:24:24 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Substract two t_quater : q1 - q2
**		return a new t_quater (malloc used)
*/

t_quater	*ft_quat_sub_new(t_quater *q1, t_quater *q2)
{
	t_quater	*dst;

	if ((dst = (t_quater *)malloc(sizeof(t_quater))) == NULL)
		return (NULL);
	dst->x = q1->x - q2->x;
	dst->y = q1->y - q2->y;
	dst->z = q1->z - q2->z;
	dst->w = q1->w - q2->w;
	return (dst);
}
