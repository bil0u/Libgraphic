/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_sub_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 04:46:28 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:20:12 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/quaternions.h"

t_quater	ft_quat_sub_n(t_quater q, float n)
{
	t_quater	dst;

	dst.w = q.w - n;
	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	return (dst);
}
