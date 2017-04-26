/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_dotprod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/25 00:32:16 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Scalar product of two t_quater
**		return the float result of q1 . q2
*/

float	ft_quat_dotprod(t_quater q1, t_quater q2)
{
	return ((q1.x * q2.x) + (q1.y * q2.y)
						+ (q1.z * q2.z) + (q1.w * q2.w));
}
