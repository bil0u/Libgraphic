/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_crossprod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/18 23:16:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
** 	->	Vectorial product of two t_quater : q1 ^ q2 = - q2 ^ q1
*/

t_quater	ft_quat_crossprod(t_quater *q1, t_quater *q2)
{
	t_quater	dst;

	dst.x = (q1->y * q2->z) - (q2->y * q1->z);
	dst.y = (q1->x * q2->z) - (q2->x * q1->z);
	dst.z = (q1->x * q2->y) - (q2->x * q1->y);
	dst.w = 0.0;
	return (dst);
}
