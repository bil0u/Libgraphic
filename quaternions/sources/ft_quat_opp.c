/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_opp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:20:03 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/quaternions.h"

/*
**	->	Opposite t_quater value : q = -q
*/

t_quater	ft_quat_opp(t_quater q)
{
	t_quater	dst;

	dst.w = q.w;
	dst.x = -(q.x);
	dst.y = -(q.y);
	dst.z = -(q.z);
	return (dst);
}
