/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_to_vec3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 20:22:20 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Convert t_vector4 to t_quater
*/

t_vector3	ft_quat_to_vec3(t_quater *v)
{
	t_vector3	dst;

	dst.x = v->x / v->w;
	dst.y = v->y / v->w;
	dst.z = v->z / v->w;
	return (dst);
}
