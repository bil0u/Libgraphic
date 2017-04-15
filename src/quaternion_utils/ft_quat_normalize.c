/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 19:08:40 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_quat_normalize(t_quater *q)
{
	t_quater	dst;
	float		n;

	n = ft_quat_norm(q);
	dst.x = q->x / n;
	dst.y = q->y / n;
	dst.z = q->z / n;
	dst.w = q->w / n;
	return (dst);
}
