/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:32:06 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Substract two t_vertex3i : v1 - v2
*/

t_vertex3i	ft_ver3i_sub(t_vertex3i *v1, t_vertex3i *v2)
{
	t_vertex3i	dst;

	dst.x = v1->x - v2->x;
	dst.y = v1->y - v2->y;
	dst.z = v1->z - v2->z;
	return (dst);
}
