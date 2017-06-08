/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_to_ver3f.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:37:12 by upopee            #+#    #+#             */
/*   Updated: 2017/06/03 16:15:44 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	t_vertex3i to t_vertex3f
*/

t_vertex3f	ft_ver3i_to_ver3f(t_vertex3i v)
{
	t_vertex3f	dst;

	dst.x = (float)v.x;
	dst.y = (float)v.y;
	dst.z = (float)v.z;
	return (dst);
}
