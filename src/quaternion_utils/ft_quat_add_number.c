/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_add_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:46:28 by upopee            #+#    #+#             */
/*   Updated: 2017/04/15 17:24:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_quat_add_number(t_quater *q, float n)
{
	t_quater	dst;

	dst.w = q->w + n;
	dst.x = q->x;
	dst.y = q->y;
	dst.z = q->z;
	return (dst);
}
