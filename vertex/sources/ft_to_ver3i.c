/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_ver3i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 01:31:21 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:23:31 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vertex.h"

t_vertex3i	ft_to_ver3i(int x, int y, int z)
{
	t_vertex3i	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}
