/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_div.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/12 09:46:19 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Divide two t_vertex3i : v1 / v2
*/

t_vertex3i	ft_ver3i_div(t_vertex3i *v1, t_vertex3i *v2)
{
	t_vertex3i	dst;

	dst.z = v1->x / v2->x;
	dst.z = v1->y / v2->y;
	dst.z = v1->z / v2->z;
	return (dst);
}
