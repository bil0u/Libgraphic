/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ver3i_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 10:10:20 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Multiply two t_vertex3i : v1 * v2
**		modify the v1 value
*/

t_vertex3i	ft_ver3i_mul(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	dst.z = v1.z * v2.z;
	return (dst);
}
