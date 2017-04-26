/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_inv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 17:36:43 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 00:32:31 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_quat_inv(t_quater q)
{
	t_quater	dst;
	float		n;

	n = q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z;
	dst.w = q.w / n;
	dst.x = -(q.x) / n;
	dst.y = -(q.y) / n;
	dst.z = -(q.z) / n;
	return (dst);
}
