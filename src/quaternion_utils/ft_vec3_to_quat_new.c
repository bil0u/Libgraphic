/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_to_quat_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 20:14:04 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libgraphic.h"

/*
**	->	Convert t_vector3 to t_quater
**		return a new quater result of the conversion
*/

t_quater	*ft_vec3_to_quat_new(t_vector3 *v, float w)
{
	t_quater	*dst;

	if ((dst = (t_quater *)malloc(sizeof(t_quater))) == NULL)
		return (NULL);
	dst->x = v->x;
	dst->y = v->y;
	dst->z = v->z;
	dst->w = w;
	return (dst);
}
