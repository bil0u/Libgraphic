/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_opp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 10:10:27 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Opposite t_vertex3i value : v = -v
*/

t_vertex3i	ft_ver3i_opp(t_vertex3i v)
{
	t_vertex3i	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}
