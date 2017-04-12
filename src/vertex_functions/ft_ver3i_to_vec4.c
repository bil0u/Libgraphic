/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_to_vec4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:31:44 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	t_vertex3i to t_vector4
*/

t_vector4	ft_ver3i_to_vec4(t_vertex3i *v, float w)
{
	t_vector4	dst;

	dst.x = (float)v->x;
	dst.y = (float)v->y;
	dst.z = (float)v->z;
	dst.w = w;
	return (dst);
}
