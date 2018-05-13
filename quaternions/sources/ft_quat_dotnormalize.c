/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_dotnormalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:49:31 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:19:19 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/quaternions.h"

t_quater	ft_quat_dotnormalize(t_quater q)
{
	t_quater	dst;
	float		w_inv;

	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	dst.w = q.w;
	if (q.w != 0)
	{
		w_inv = 1.0 / q.w;
		dst.x *= w_inv;
		dst.y *= w_inv;
		dst.z *= w_inv;
		dst.w *= w_inv;
	}
	return (dst);
}
