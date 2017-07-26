/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spheric_to_quat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 03:46:10 by upopee            #+#    #+#             */
/*   Updated: 2017/07/26 20:05:03 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libgraphic.h"

t_quater	ft_spheric_to_quat(float theta, float phi)
{
	t_quater	dst;

	dst.x = cosf(phi) * sinf(theta);
	dst.y = sinf(phi) * sinf(theta);
	dst.z = cosf(theta);
	dst.w = 1.0;
	return (dst);
}
