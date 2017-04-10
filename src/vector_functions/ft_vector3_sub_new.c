/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_sub_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/06 05:23:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Add two t_vector3 : v1 - v2
**		return a new t_vector3 (malloc used)
*/

t_vector3	*ft_vector3_sub_new(t_vector3 *v1, t_vector3 *v2)
{
	t_vector3	*dst;

	if ((dst = (t_vector3 *)malloc(sizeof(t_vector3))) == NULL)
		return (NULL);
	dst->x = v1->x - v2->x;
	dst->y = v1->y - v2->y;
	dst->z = v1->z - v2->z;
	return (dst);
}
