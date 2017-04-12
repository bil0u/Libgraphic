/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3f_to_vec4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:44:12 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	t_vertex3f to t_vector4
*/

t_vector4	ft_ver3f_to_vec4(t_vertex3f *v, float w)
{
	t_vector4	dst;

	dst.x = v->x;
	dst.y = v->y;
	dst.z = v->z;
	dst.w = w;
	return (dst);
}
