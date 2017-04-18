/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_crossprod_new.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/18 23:08:50 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
** 	->	Vectorial product of two t_quater : q1 ^ q2 = - q2 ^ q1
**		return the result in a new t_quater (malloc used)
*/

t_quater	*ft_quat_crossprod_new(t_quater *q1, t_quater *q2)
{
	t_quater	*dst;

	if ((dst = (t_quater *)malloc(sizeof(t_quater))) == NULL)
		return (NULL);
	dst->x = (q1->y * q2->z) - (q2->y * q1->z);
	dst->y = (q1->x * q2->z) - (q2->x * q1->z);
	dst->z = (q1->x * q2->y) - (q2->x * q1->y);
	dst->w = 0.0;
	return (dst);
}
