/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_scale.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:46:28 by upopee            #+#    #+#             */
/*   Updated: 2017/06/03 14:55:19 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_quater	ft_quat_scale(t_quater q, float n)
{
	t_quater	dst;

	dst.w = q.w * n;
	dst.x = q.x * n;
	dst.y = q.y * n;
	dst.z = q.z * n;
	return (dst);
}
