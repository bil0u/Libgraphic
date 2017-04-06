/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3crossprod_new.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:45:35 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
** 	->	Vectorial product of two t_vector3 : v1 ^ v2 = - v2 ^ v1
**		return the result in a new t_vector3 (malloc used)
*/

t_vector3	*ft_vector3crossprod_new(t_vector3 *v1, t_vector3 *v2)
{
	t_vector3	*dst;

	if ((dst = (t_vector3 *)malloc(sizeof(t_vector3))) == NULL)
		return (NULL);
	dst->x = (v1->y * v2->z) - (v2->y * v1->z);
	dst->y = (v1->x * v2->z) - (v2->x * v1->z);
	dst->z = (v1->x * v2->y) - (v2->x * v1->y);
	return (dst);
}
