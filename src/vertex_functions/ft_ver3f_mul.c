/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3f_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:34:55 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Multiply two t_vertex3f : v1 * v2
*/

t_vertex3f	ft_ver3f_mul(t_vertex3f *v1, t_vertex3f *v2)
{
	t_vertex3f	dst;

	dst.x = v1->x * v2->x;
	dst.y = v1->y * v2->y;
	dst.z = v1->z * v2->z;
	return (dst);
}
