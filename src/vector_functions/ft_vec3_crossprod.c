/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_crossprod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:28:49 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
** 	->	Vectorial product of two t_vector3 : v1 ^ v2 = - v2 ^ v1
*/

t_vector3	ft_vec3_crossprod(t_vector3 *v1, t_vector3 *v2)
{
	t_vector3	dst;

	dst.x = (v1->y * v2->z) - (v2->y * v1->z);
	dst.y = (v1->x * v2->z) - (v2->x * v1->z);
	dst.z = (v1->x * v2->y) - (v2->x * v1->y);
	return (dst);
}
