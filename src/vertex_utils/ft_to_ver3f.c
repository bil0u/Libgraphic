/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_ver3f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 01:31:21 by upopee            #+#    #+#             */
/*   Updated: 2017/06/28 01:49:54 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vertex3f	ft_to_ver3f(float x, float y, float z)
{
	t_vertex3f	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}
