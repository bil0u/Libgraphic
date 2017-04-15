/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_to_quat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 20:22:55 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Convert t_vector3 to t_quater
*/

t_quater	ft_vec3_to_quat(t_vector3 *v, float w)
{
	t_quater	dst;

	dst.x = v->x;
	dst.y = v->y;
	dst.z = v->z;
	dst.w = w;
	return (dst);
}
